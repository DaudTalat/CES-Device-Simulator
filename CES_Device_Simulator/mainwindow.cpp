#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    timer = new QTimer(this);
    loop = new QEventLoop();
    battery = new Battery(100);
    ui->setupUi(this);
    connect(ui->btnPowerOn, SIGNAL(released()), this, SLOT(powerOn()));
    connect(ui->btnPowerOff, SIGNAL(released()), this, SLOT(powerOff()));
    connect(ui->btnStartSession, SIGNAL(released()), this, SLOT(runSession()));
    connect(ui->btnEndSession, SIGNAL(released()), this, SLOT(endSession()));
    connect(ui->btnIntensityUp, SIGNAL(released()), this, SLOT(intensityUp()));
    connect(ui->btnIntensityDown, SIGNAL(released()), this, SLOT(intensityDown()));
}

void MainWindow::intensityDown()
{
    ui->barIntensity->setValue(ui->barIntensity->value() - 1);
}

void MainWindow::intensityUp()
{
    ui->barIntensity->setValue(ui->barIntensity->value() + 1);
}

void MainWindow::runSession(){

    ui->btnEndSession->setEnabled(true);
    ui->btnStartSession->setEnabled(false);


    int intensity = ui->barIntensity->value();
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

    if(ui->rbTwentyOption->isChecked()){
        length = 20;
    }else if(ui->rbFortyFiveOption->isChecked()){
        length = 45;
    }


    //currentSession->setBattery(battery);
    //currentSession->startSession(length, intensity, record, type);
    currentSession = new Session(0, length, type, NONE);
    currentSession->setSessionFlag(true);

    loopSession();

    Connection connection;

    if(ui->ckLeftEarDisconnected->isChecked() || ui->ckRightEarDisconnected){
        connection = NONE;
    }else if(ui->rbOkayConnection->isChecked()){
        connection = OKAY;
    }else if(ui->rbExcellentConnection->isChecked()){
        connection = EXCELLENT;
    }


    //Test connection
    testConnection(connection,false);
    //do while loop to run through session
    //
}

void MainWindow::loopSession()
{
    while(currentSession->getSessionFlag()){
        qInfo("battery: %d", battery->getPowerLevel());
        int depletionRate = 1;

        connect(timer, &QTimer::timeout, loop, &QEventLoop::quit);
        timer->setSingleShot(true);
        timer->start(500);
        loop->exec();
        currentSession->incrementLength(1);
        battery->decrement(depletionRate);

        ui->barBatteryLevel->setValue(ui->barBatteryLevel->value() - depletionRate);

        if(battery->getPowerLevel() == 3){
            qInfo("Low battery");
            qInfo("Ending session...");
            return;
        }
        if(currentSession->getInitLength() == currentSession->getLength()){
            currentSession->setSessionFlag(false);
            qInfo("Finished Session...");
            endSession();
            return;
        }
    }
}

void MainWindow::endSession(){
    ui->btnStartSession->setEnabled(true);
    timer->stop();
    loop->quit();
    timer = new QTimer(this);
    loop = new QEventLoop();
    currentSession->setSessionFlag(false);
    qInfo("Ending Session...");
    //currentSession->endSession();
}

bool MainWindow::testConnection(Connection connection, bool start){
    if (start){
        // change lables colors and

    }
    QString output;
    if(connection == NONE){

        if(connection == NONE){
            endSession();
            output  = "Output: Lost Connection";
        }else if(connection == OKAY){
            output = "Output: Okay Connection";
        }else{
            output = "Output: Excellent Connection";
        }

    }
    ui->lbStatusOutput->setText(output);
    return false;
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
        currentSession->endSession();
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
