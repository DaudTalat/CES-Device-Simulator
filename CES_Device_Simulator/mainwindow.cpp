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

void MainWindow::endSession(){
    stop = true;
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

