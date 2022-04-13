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
    //Battery* battery;

private slots:
    void powerOn();
    void powerOff();
    void runSession();
    void endSession();
    void intensityUp();
    void intensityDown();
    void updateIntensity();
};
#endif // MAINWINDOW_H
