#include "Records.h"

Records::Records() : size(0)
{
    sessions = new Session[50];
}

void Records::addSession(Session& s)
{
    sessions[size++] = s;
}
