#ifndef SESSION_H
#define SESSION_H

enum Type {MET, DELTA, THETA, ALPHA};

class Session
{
public:
    Session(int, int, Type);
    int changeIntensity(int);
    int incrementLength(int);
private:
    int initlength;
    int length;
    int intensity;
    Type type;

};

#endif // SESSION_H
