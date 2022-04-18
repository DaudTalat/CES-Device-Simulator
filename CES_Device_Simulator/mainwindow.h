#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "Battery.h"
#include "Session.h"
#include "Defs.h"
#include <QString>
#include "QtGlobal"
#include "QEventLoop"
#include "QTimer"
#include "intensitymeter.h"
#include "Records.h"

//The MainWindow class is the control of our device, it handles all the functionality of our device.
//The runSession() function checks if the battery is sufficient enough to run, and checks to see if the connection is good enough to run a session
//The loopSession() function loops through the session. Each iteration will check if the battery level is greater than 5, will check for the ear connection, and check
//if the duration length has been reached or not.
//Each iteration the battery will deplete by a rate calculated using intensity, and the connection quality
//The endSession() function terminates the session loop prematurely
//The powerOn() function enables buttons and gives functionality to the device
//The powerOff() function disables buttons and removes functionality to the device


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void saveData();
    void changeIntensity(int);
    void turnOn();
    void turnOff();
    bool testConnection(bool);
    bool stop = false;

private:
    void loopSession();
    Ui::MainWindow *ui;
    Battery* battery;
    Session* currentSession;
    QEventLoop* loop;
    QTimer* timer;
    QTimer* errorTimer;
    IntensityMeter* intensityMeter;
    Records record;
    void updateIntensity();

private slots:
    void powerOn();
    void powerOff();
    void runSession();
    void endSession();
    void intensityUp();
    void intensityDown();
    void recordSession();

};
#endif // MAINWINDOW_H
