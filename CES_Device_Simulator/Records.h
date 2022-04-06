#ifndef RECORDS_H
#define RECORDS_H

#include "Session.h"
#include "Battery.h"


class Records
{
public:
    Records();
    void addSession(Session&);
private:
    Session* sessions;
    int size;
};

#endif // RECORDS_H
