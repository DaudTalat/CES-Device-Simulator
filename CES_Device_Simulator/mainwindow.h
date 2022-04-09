#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "Battery.h"
#include "Session.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void runSession();
    void endSession();
    void saveData();
    void changeIntensity(int);
    void turnOn();
    void turnOff();
    bool testConnection();

private:
    Ui::MainWindow *ui;
    Battery* battery = new Battery(100);
    int intensity = 0;
    Session currentSession;
    Session* sessions = new Session[50];


};
#endif // MAINWINDOW_H
