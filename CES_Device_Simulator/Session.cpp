#include "Session.h"

Session::Session(int i, int l, Type t) : initlength(l), intensity(i), type(t), length(0)
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
