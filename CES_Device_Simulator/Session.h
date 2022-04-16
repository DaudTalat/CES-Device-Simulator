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

    void setSessionFlag(bool);

    Type getType();
    Connection getConnection();
private:
    int initlength;
    int length;
    int intensity;
    bool sessionFlag;
    Type type;
    Connection connection;


};

#endif // SESSION_H
