#include "Session.h"

Session::Session(int i, int l, Type t, Connection c) : initlength(l), intensity(i), type(t), length(0), connection(c)
{
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
