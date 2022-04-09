#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->btnPowerOn, SIGNAL(released()), this, SLOT(powerOn()));
    connect(ui->btnPowerOff, SIGNAL(released()), this, SLOT(powerOff()));
}


void MainWindow::runSession(){

    int intensity = ui->barIntensityBar->value();

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

    Connection connection;

    if(ui->rbNoConnection->isChecked()){
        connection = NONE;
    }else if(ui->rbOkayConnection->isChecked()){
        connection = OKAY;
    }else if(ui->rbExcellentConnection->isChecked()){
        connection = EXCELLENT;
    }

    bool leftEarDisconnected = ui->ckLeftEarDisconnected->isChecked();
    bool rightEarDisconnected = ui->ckRightEarDisconnected->isChecked();

    //Test connection
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::powerOn()
{
    ui->btnPowerOff->setEnabled(true);
    ui->btnPowerOn->setEnabled(false);
    ui->btnEndSession->setEnabled(true);
    ui->btnIntensityDown->setEnabled(true);
    ui->btnIntensityUp->setEnabled(true);
    ui->btnStartSession->setEnabled(true);
    ui->rbAlphaOption->setEnabled(true);
    ui->rbCustomOption->setEnabled(true);
    ui->rbDeltaOption->setEnabled(true);
    ui->rbExcellentConnection->setEnabled(true);
    ui->rbFortyFiveOption->setEnabled(true);
    ui->rbMetOption->setEnabled(true);
    ui->rbNoConnection->setEnabled(true);
    ui->rbOkayConnection->setEnabled(true);
    ui->rbThetaOption->setEnabled(true);
    ui->rbTwentyOption->setEnabled(true);
    ui->ckLeftEarDisconnected->setEnabled(true);
    ui->ckRightEarDisconnected->setEnabled(true);
    ui->ckRecordSession->setEnabled(true);
}

void MainWindow::powerOff()
{
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
    ui->rbNoConnection->setEnabled(false);
    ui->rbOkayConnection->setEnabled(false);
    ui->rbThetaOption->setEnabled(false);
    ui->rbTwentyOption->setEnabled(false);
    ui->ckLeftEarDisconnected->setEnabled(false);
    ui->ckRightEarDisconnected->setEnabled(false);
    ui->ckRecordSession->setEnabled(false);
}

