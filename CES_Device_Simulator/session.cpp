#include "session.h"

Session::Session(int i) : intensity(i)
{
    length = calculateLength(i);
}
