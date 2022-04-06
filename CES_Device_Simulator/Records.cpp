#include "Records.h"

Records::Records() : size(0)
{
    sessions = new Session[];
}

Records::addSession(Session s)
{
    sessions[size++] = s;
}
