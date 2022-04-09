#ifndef SESSION_H
#define SESSION_H

#include "Defs.h"

class Session
{
public:
    Session(int = 0, int = 0, Type = MET);
    int changeIntensity(int);
    int incrementLength(int);
    int getLength();
    int getIntensity();
    Type getType();
private:
    int initlength;
    int length;
    int intensity;
    Type type;

};

#endif // SESSION_H
