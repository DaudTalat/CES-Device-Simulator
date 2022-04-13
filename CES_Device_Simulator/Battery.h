#ifndef BATTERY_H
#define BATTERY_H


class Battery
{
public:
    Battery(int);
    float batteryPercentage = 100;
    float decrement(float);
    float getPowerLevel();
    void setPowerLevel(float);
private:
    float powerLevel;
};

#endif // BATTERY_H
