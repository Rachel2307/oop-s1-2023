#include "Ford.h"

Ford::Ford() : Car(), badgeNumber(0), litresOfFuel(60.0) {}

Ford::Ford(int badgeNumber, int price) : Car(price), badgeNumber(badgeNumber), litresOfFuel(60.0) {}

int Ford::get_badgeNumber() const {
    return badgeNumber;
}

float Ford::get_litresOfFuel() const {
    return litresOfFuel;
}

void Ford::set_badgeNumber(int badgeNumber) {
    this->badgeNumber = badgeNumber;
}

void Ford::set_litresOfFuel(float litres) {
    if (litres < 0.0) {
        litresOfFuel = 0.0;
    } else if (litres > 60.0) {
        litresOfFuel = 60.0;
    } else {
        litresOfFuel = litres;
    }
}

void Ford::refuel(int litres) {
    litresOfFuel += litres;

    if (litresOfFuel > 60.0) {
        litresOfFuel = 60.0;
    }
}

void Ford::drive(int kms) {
    while (kms > 0 && litresOfFuel > 0.0) {
        // Calculate emissions (234g per kilometer)
        float emissionsPerKm = 234.0;
        float emissions = emissionsPerKm;

        // Calculate fuel usage (1L per 5 km)
        float fuelUsage = 1.0 / 5;

        // Check if fuel can cover the distance
        if (fuelUsage * 60.0 > litresOfFuel) {
            // If not enough fuel, adjust emissions and fuel usage
            emissions = litresOfFuel / 60.0 * emissionsPerKm;
            fuelUsage = litresOfFuel / 60.0;
        }

        // Update fuel and emissions
        Car::drive(1); // Use the drive method from the base Car class
        litresOfFuel -= fuelUsage * 60.0; // Convert back to litres
        emissions += emissions;

        // Ensure fuel does not go below 0
        if (litresOfFuel < 0.0) {
            litresOfFuel = 0.0;
        }

        kms--;
    }
}

Ford::~Ford() {}
