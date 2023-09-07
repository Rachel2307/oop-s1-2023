#include "Tesla.h"

Tesla::Tesla() : Car(), model('S'), batteryPercentage(100.0) {}

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

void Tesla::set_batteryPercentage(float percentage) {
    if (percentage < 0.0) {
        batteryPercentage = 0.0;
    } else if (percentage > 100.0) {
        batteryPercentage = 100.0;
    } else {
        batteryPercentage = percentage;
    }
}

void Tesla::chargeBattery(int mins) {
    float addedPercentage = 0.005 * mins; // 0.5% per minute
    batteryPercentage += addedPercentage;

    if (batteryPercentage > 100.0) {
        batteryPercentage = 100.0;
    }
}

void Tesla::drive(int kms) {
    while (kms > 0 && batteryPercentage > 0.0) {
        // Calculate emissions (74g per kilometer)
        float emissionsPerKm = 74.0;
        float emissions = emissionsPerKm;

        // Calculate battery usage (1% per 5 km)
        float batteryUsage = 1.0 / 5;

        // Check if battery can cover the distance
        if (batteryUsage * 100.0 > batteryPercentage) {
            // If not enough battery, adjust emissions and battery usage
            emissions = batteryPercentage / 100.0 * emissionsPerKm;
            batteryUsage = batteryPercentage / 100.0;
        }

        // Update battery and emissions
        Car::drive(1); // Use the drive method from the base Car class
        batteryPercentage -= batteryUsage * 100.0; // Convert back to percentage
        emissions += emissions;

        // Ensure battery percentage does not go below 0
        if (batteryPercentage < 0.0) {
            batteryPercentage = 0.0;
        }

        kms--;
    }
}
