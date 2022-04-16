#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    timer = new QTimer(this);
    loop = new QEventLoop();
    errorTimer = new QTimer(this);
    battery = new Battery(100);
    ui->setupUi(this);
    currentSession = new Session();
    intensityMeter = new IntensityMeter(ui->barIntensity->value());
    connect(ui->btnPowerOn, SIGNAL(released()), this, SLOT(powerOn()));
    connect(ui->btnPowerOff, SIGNAL(released()), this, SLOT(powerOff()));
    connect(ui->btnStartSession, SIGNAL(released()), this, SLOT(runSession()));
    connect(ui->btnEndSession, SIGNAL(released()), this, SLOT(endSession()));
    connect(ui->btnIntensityUp, SIGNAL(released()), this, SLOT(intensityUp()));
    connect(ui->btnIntensityDown, SIGNAL(released()), this, SLOT(intensityDown()));
    connect(ui->ckRecordSession, SIGNAL(released()), this, SLOT(recordSession()));
}

void MainWindow::intensityDown()
{
    if(intensityMeter->getIntensity() > 1){
        intensityMeter->setIntensity(intensityMeter->getIntensity() - 1);
        updateIntensity();
    }

}

void MainWindow::intensityUp()
{
    intensityMeter->setIntensity(intensityMeter->getIntensity() + 1);
    updateIntensity();
}

void MainWindow::updateIntensity(){
    ui->barIntensity->setValue(intensityMeter->getIntensity());
}

void MainWindow::runSession(){
    if(testConnection(true)){
        ui->btnEndSession->setEnabled(true);
        ui->btnStartSession->setEnabled(false);
        ui->rbDeltaOption->setEnabled(false);
        ui->rbMetOption->setEnabled(false);
        ui->rbThetaOption->setEnabled(false);
        ui->rbAlphaOption->setEnabled(false);
        ui->rbTwentyOption->setEnabled(false);
        ui->rbCustomOption->setEnabled(false);
        ui->rbFortyFiveOption->setEnabled(false);
        ui->spnMinutesInput->setEnabled(false);

        int length = 0;
        bool record = ui->ckRecordSession->isChecked();

        Type type;
        if (ui->rbAlphaOption->isChecked()){
            type = ALPHA;
        }else if(ui->rbThetaOption->isChecked()){
            type = THETA;
        }else if(ui->rbDeltaOption->isChecked()){
            type = DELTA;
        }else if(ui->rbMetOption->isChecked()){
            type = MET;
        }

        if(ui->rbCustomOption->isChecked()){
            length = ui->spnMinutesInput->value();
        }else if(ui->rbTwentyOption->isChecked()){
            length = 20;
        }else if(ui->rbFortyFiveOption->isChecked()){
            length = 45;
        }

        currentSession = new Session(intensityMeter->getIntensity(), length, type, NONE);
        currentSession->setSessionFlag(true);
        loopSession();
    }
}

void MainWindow::loopSession()
{
    while(currentSession->getSessionFlag()){
        if(!testConnection(false)){
            int count = 0;
            while(!testConnection(false)){
                int isExcellent = ui->rbExcellentConnection->isChecked();

                connect(timer, &QTimer::timeout, loop, &QEventLoop::quit);
                timer->setSingleShot(true);
                timer->start(500);
                loop->exec();
                count++;

                if(count == 20){
                    currentSession->setSessionFlag(false);
                    qInfo("Device Disconnected For Too Long, Ending Session.");
                    ui->lbStatusOutput->setText("Output: Device Disconnected For Too Long, Ending Session.");
                    endSession();
                    return;
                }
            }
        }

        int isExcellent = ui->rbExcellentConnection->isChecked();

        float depletionRate = (intensityMeter->getIntensity()* 0.5);
        if(!isExcellent){
            depletionRate -= 0.2;
        }

        connect(timer, &QTimer::timeout, loop, &QEventLoop::quit);
        timer->setSingleShot(true);
        timer->start(500);
        loop->exec();

        currentSession->incrementLength(1);
        battery->decrement(depletionRate);

        ui->barBatteryLevel->setValue(battery->getPowerLevel());

        if(battery->getPowerLevel() <= 3){
            qInfo("Low battery");
            qInfo("Ending session...");
            endSession();
            return;
        }
        if(currentSession->getLength() >= currentSession->getInitLength()){
            currentSession->setSessionFlag(false);
            qInfo("Finished Session...");
            endSession();
            return;
        }
    }
}

void MainWindow::endSession(){
    ui->btnStartSession->setEnabled(true);
    ui->btnEndSession->setEnabled(false);
    ui->rbDeltaOption->setEnabled(true);
    ui->rbMetOption->setEnabled(true);
    ui->rbThetaOption->setEnabled(true);
    ui->rbAlphaOption->setEnabled(true);
    ui->rbTwentyOption->setEnabled(true);
    ui->rbCustomOption->setEnabled(true);
    ui->rbFortyFiveOption->setEnabled(true);
    ui->spnMinutesInput->setEnabled(true);
    timer->stop();
    loop->quit();
    timer = new QTimer(this);
    loop = new QEventLoop();

    currentSession->setSessionFlag(false);
    qInfo("Ending Session...");

    if (record.getRecordActive() == true) {
        qInfo("Logging Therapy Session...");
        record.addSession(currentSession);
    }
}

bool MainWindow::testConnection(bool start){
    ui->lbRightEar->setStyleSheet("color : black");
    ui->lbLeftEar->setStyleSheet("color : black");
    if(ui->ckLeftEarDisconnected->isChecked() || ui->ckRightEarDisconnected->isChecked()){
        QString output = "Output: ";
        if(ui->ckRightEarDisconnected->isChecked() && !ui->ckLeftEarDisconnected->isChecked() ){
            output.append("Right Ear ");
            ui->lbRightEar->setStyleSheet("color: red");
        }else if (ui->ckLeftEarDisconnected->isChecked() && !ui->ckRightEarDisconnected->isChecked()){
            output.append("Left Ear ");
            ui->lbLeftEar->setStyleSheet("color: red");
        }else{
            output.append("Left and Right Ears ");
            ui->lbRightEar->setStyleSheet("color : red");
            ui->lbLeftEar->setStyleSheet("color : red");
        }
        if(start){
            output.append("Disconnected, Session not started");
            ui->lbStatusOutput->setText(output);
            return false;
        }
        ui->lbStatusOutput->setText("Output: No connection, Session Paused");
        return false;
    }


    if(ui->rbOkayConnection->isChecked()){
        ui->lbStatusOutput->setText("Output: Okay Connection");
    }else if(ui->rbExcellentConnection->isChecked()){
        ui->lbStatusOutput->setText("Output: Excellent Connection");
    }
    return true;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::powerOn()
{
    ui->btnPowerOff->setEnabled(true);
    ui->btnPowerOn->setEnabled(false);
    ui->btnIntensityDown->setEnabled(true);
    ui->btnIntensityUp->setEnabled(true);
    ui->btnStartSession->setEnabled(true);
    ui->rbAlphaOption->setEnabled(true);
    ui->rbCustomOption->setEnabled(true);
    ui->rbDeltaOption->setEnabled(true);
    ui->rbExcellentConnection->setEnabled(true);
    ui->rbFortyFiveOption->setEnabled(true);
    ui->rbMetOption->setEnabled(true);
    ui->rbOkayConnection->setEnabled(true);
    ui->rbThetaOption->setEnabled(true);
    ui->rbTwentyOption->setEnabled(true);
    ui->ckLeftEarDisconnected->setEnabled(true);
    ui->ckRightEarDisconnected->setEnabled(true);
    ui->ckRecordSession->setEnabled(true);
    ui->spnMinutesInput->setEnabled(true);
}

void MainWindow::powerOff()
{
    if (currentSession->getSessionFlag())
    {
        endSession();
    }

    ui->btnPowerOff->setEnabled(false);
    ui->btnPowerOn->setEnabled(true);
    ui->btnEndSession->setEnabled(false);
    ui->btnIntensityDown->setEnabled(false);
    ui->btnIntensityUp->setEnabled(false);
    ui->btnStartSession->setEnabled(false);
    ui->rbAlphaOption->setEnabled(false);
    ui->rbCustomOption->setEnabled(false);
    ui->rbDeltaOption->setEnabled(false);
    ui->rbExcellentConnection->setEnabled(false);
    ui->rbFortyFiveOption->setEnabled(false);
    ui->rbMetOption->setEnabled(false);
    ui->rbOkayConnection->setEnabled(false);
    ui->rbThetaOption->setEnabled(false);
    ui->rbTwentyOption->setEnabled(false);
    ui->ckLeftEarDisconnected->setEnabled(false);
    ui->ckRightEarDisconnected->setEnabled(false);
    ui->ckRecordSession->setEnabled(false);
    ui->spnMinutesInput->setEnabled(false);
}

void MainWindow::recordSession() {
    record.setRecordActive(true);
}
