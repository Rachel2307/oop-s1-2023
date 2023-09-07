#include "Ford.h"

Ford::Ford() : Car(), badgeNumber(0), litresOfFuel(60.0) {}

Ford::Ford(int badgeNumber, int price) : Car(price), badgeNumber(badgeNumber), litresOfFuel(60.0) {}

int Ford::get_badgeNumber() const {
    return badgeNumber;
}

void Ford::set_badgeNumber(int badgeNumber) {
    this->badgeNumber = badgeNumber;
}

float Ford::get_litresOfFuel() const {
    return litresOfFuel;
}

void Ford::set_litresOfFuel(float litresOfFuel) {
    this->litresOfFuel = litresOfFuel;
}

void Ford::refuel(int litres) {
    litresOfFuel += litres;
    if (litresOfFuel > 60.0) {
        litresOfFuel = 60.0;
    }
}

void Ford::drive(int kms) {
    float co2Emissions = 234.0 * kms;
    Car::drive(kms);
    if (litresOfFuel >= 5.0) {
        litresOfFuel -= static_cast<float>(kms) / 5.0;
        if (litresOfFuel < 0.0)
            litresOfFuel = 0.0;
    }
    else {
        litresOfFuel = 0.0;
        co2Emissions += 234.0 * litresOfFuel;
    }
    set_emissions(get_emissions() + static_cast<int>(co2Emissions));
}