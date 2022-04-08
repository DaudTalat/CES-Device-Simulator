#include "Battery.h"

Battery::Battery(int n) : powerLevel(n)
{

}

int Battery::decrement(int n)
{
    powerLevel -= n;
    return powerLevel;
}
