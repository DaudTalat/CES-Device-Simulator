#include "intensitymeter.h"

IntensityMeter::IntensityMeter(int initIntensity)
{
    intensity = initIntensity;
}


int IntensityMeter::getIntensity(){
    return intensity;
}

void IntensityMeter::setIntensity(int value){
    intensity = value;
}
