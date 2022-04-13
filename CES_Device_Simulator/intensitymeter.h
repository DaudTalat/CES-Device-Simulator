#ifndef INTENSITYMETER_H
#define INTENSITYMETER_H


class IntensityMeter
{
public:
    IntensityMeter(int=0);
    int getIntensity();
    void setIntensity(int);
private:
    int intensity;
};

#endif // INTENSITYMETER_H
