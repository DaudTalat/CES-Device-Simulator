#include "Battery.h"

Battery::Battery(int n) : powerLevel(n)
{

}

Battery::decrement(int n)
{
    powerLevel -= n;
    return powerLevel;
}
