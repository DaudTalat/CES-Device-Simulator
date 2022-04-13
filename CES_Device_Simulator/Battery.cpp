#include "Battery.h"

Battery::Battery(int n) : powerLevel(n)
{

}

float Battery::getPowerLevel(){ return powerLevel;
}

void Battery::setPowerLevel(float value){
    powerLevel = value;
}

float Battery::decrement(float n)
{
    powerLevel -= n;
    return powerLevel;
}

