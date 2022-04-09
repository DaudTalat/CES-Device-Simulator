#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}


void MainWindow::runSession(){
    //
    // get intensity
    // check if recorded
    // get type
    // get and check intensity
    // get connection
    // get // ear connection
}

MainWindow::~MainWindow()
{
    delete ui;
}

