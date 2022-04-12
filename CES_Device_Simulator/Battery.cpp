#include "Battery.h"

Battery::Battery(int n) : powerLevel(n)
{

}

int Battery::getPowerLevel(){
    return powerLevel;
}

void Battery::setPowerLevel(int value){
    powerLevel = value;
}

int Battery::decrement(int n)
{
    powerLevel -= n;
    return powerLevel;
}
