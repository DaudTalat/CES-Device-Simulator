#include "Session.h"

Session::Session(int i, int l, Type t, Connection c) : initlength(l), length(0), intensity(i), type(t), connection(c)
{
    //timer = new QTimer(this);
    //loop = new QEventLoop();
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

int Session::getInitLength()
{
    return initlength;
}

int Session::getIntensity()
{
    return intensity;
}

bool Session::getSessionFlag()
{
    return sessionFlag;
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

