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

private:
    bool recordActive = false;

public:
    Records();
    void addSession(Session *);
    void setRecordActive(bool);
    bool getRecordActive();

};

#endif // RECORDS_H
