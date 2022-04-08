#ifndef BATTERY_H
#define BATTERY_H


class Battery
{
public:
    Battery(int);
    int batteryPercentage = 100;
    int decrement(int);
private:
    int powerLevel;
};

#endif // BATTERY_H
