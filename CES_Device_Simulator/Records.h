#ifndef RECORDS_H
#define RECORDS_H

#include "Session.h"
#include "Battery.h"
#include <QCoreApplication>
#include <QFile>
#include <QTextStream>
#include <QDebug>

class Records
{
public:
    Records();
    void addSession(Session *);
    void getSessions(); //may need to change from void to something else

};

#endif // RECORDS_H
