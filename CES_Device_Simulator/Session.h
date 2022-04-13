#ifndef SESSION_H
#define SESSION_H

#include <QObject>
#include "Defs.h"
#include "QtGlobal"
#include "QEventLoop"
#include "QTimer"
#include "Battery.h"

class Session : public QObject
{
    Q_OBJECT

public:
    Session(int = 0, int = 0, Type = MET, Connection = NONE);
    int changeIntensity(int);
    int incrementLength(int);
    int getLength();
    int getIntensity();
    bool getSessionFlag();
    int getInitLength();
    //Battery* getBattery();
    void setSessionFlag(bool);
    //void setBattery(Battery*);
    void startSession(int, int, bool, Type);
    void endSession();
    Type getType();
    Connection getConnection();
private:
    int initlength;
    int length;
    int intensity;
    bool sessionFlag;
    Type type;
    Connection connection;
   // QEventLoop* loop;
    //QTimer* timer;
    //Battery* battery;

};

#endif // SESSION_H
