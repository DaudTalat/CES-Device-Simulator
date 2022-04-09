#ifndef SESSION_H
#define SESSION_H

#include "Defs.h"

class Session
{
public:
    Session(int = 0, int = 0, Type = MET, Connection = NONE);
    int changeIntensity(int);
    int incrementLength(int);
    int getLength();
    int getIntensity();
    Type getType();
    Connection getConnection();
private:
    int initlength;
    int length;
    int intensity;
    Type type;
    Connection connection;

};

#endif // SESSION_H
