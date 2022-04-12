#include "Session.h"

Session::Session(int i, int l, Type t, Connection c) : initlength(l), length(0), intensity(i), type(t), connection(c)
{
    timer = new QTimer(this);
    loop = new QEventLoop();
    sessionFlag = false;
}

int Session::changeIntensity(int i)
{
    intensity = i;
    return intensity;
}

int Session::incrementLength(int l)
{
    length += l;
    return length;
}

int Session::getLength()
{
    return length;
}

int Session::getIntensity()
{
    return intensity;
}

Type Session::getType()
{
    return type;
}

Connection Session::getConnection()
{
    return connection;
}

void Session::setSessionFlag(bool flag){
    sessionFlag = flag;
}

void Session::setBattery(Battery* b){
    battery = b;
}

void Session::startSession(int sessionLength, int intensity, bool record, Type option){
    int count = 0;
    qInfo("%d",intensity);
    qInfo("%d", record);

    if (option == ALPHA){
        type = ALPHA;
    }else if(option == THETA){
        type = THETA;
    }else if(option == DELTA){
        type = DELTA;
    }else if(option == MET){
        type = MET;
    }

    while(sessionFlag){
        qInfo("battery: %d", battery->getPowerLevel());
        int depletionRate = 1;

        connect(timer, &QTimer::timeout, loop, &QEventLoop::quit);
        timer->setSingleShot(true);
        timer->start(500);
        loop->exec();
        count++;
        battery->decrement(depletionRate);
        if(battery->getPowerLevel() == 3){
            qInfo("Low battery");
            qInfo("Ending session...");
            return;
        }
        if(count == sessionLength){
            sessionFlag = false;
            qInfo("Finished Session...");
            return;
        }
    }
}

void Session::endSession(){
    timer->stop();
    loop->quit();
    timer = new QTimer(this);
    loop = new QEventLoop();
    sessionFlag = false;
    qInfo("Ending Session...");
}
