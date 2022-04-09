#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}


void MainWindow::runSession(){

    int intensity = ui->barIntensity->value();

    bool record = ui->ckRecordSession();

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

