#ifndef TESLA_H
#define TESLA_H

#include "Car.h"

class Tesla : public Car {
public:
    Tesla();
    Tesla(char model, int price);

    char get_model() const;
    float get_batteryPercentage() const;
    void set_model(char model);
    void set_batteryPercentage(float percentage);

    void chargeBattery(int mins);
    void drive(int kms);

    virtual ~Tesla(); // Virtual destructor for polymorphism
private:
    char model;
    float batteryPercentage;
};

#endif // TESLA_H
