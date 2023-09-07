#include "Tesla.h"

Tesla::Tesla() : model(' '), batteryPercentage(100.0) {}

Tesla::Tesla(char model, int price) : Car(price), model(model), batteryPercentage(100.0) {}

char Tesla::get_model() const {
    return model;
}

float Tesla::get_batteryPercentage() const {
    return batteryPercentage;
}

void Tesla::set_model(char model) {
    this->model = model;
}

void Tesla::set_batteryPercentage(float batteryPercentage) {
    if (batteryPercentage < 0.0)
        this->batteryPercentage = 0.0;
    else if (batteryPercentage > 100.0)
        this->batteryPercentage = 100.0;
    else
        this->batteryPercentage = batteryPercentage;
}

void Tesla::chargeBattery(int mins) {
    float percentageToAdd = 0.5 * mins ;
    if (batteryPercentage + percentageToAdd > 100.0)
        batteryPercentage = 100.0;
    else
        batteryPercentage += percentageToAdd;
}

void Tesla::drive(int kms) {
    float co2Emissions = 74.0 * kms;
    if (batteryPercentage >= 1.0) {
        batteryPercentage -= static_cast<float>(kms) / 5.0;
        if (batteryPercentage < 0.0)
            batteryPercentage = 0.0;
    }
    else {
        co2Emissions += 74.0 * (kms * 0.01); // CO2 from electricity generation
        batteryPercentage = 0.0;
    }
    set_emissions(get_emissions() + static_cast<int>(co2Emissions));
}
