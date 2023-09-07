#include "Ford.h"

Ford::Ford() : badgeNumber(0), litresOfFuel(60.0) {}

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

void Ford::set_litresOfFuel(float litresOfFuel) {
    if (litresOfFuel < 0.0)
        this->litresOfFuel = 0.0;
    else if (litresOfFuel > 60.0)
        this->litresOfFuel = 60.0;
    else
        this->litresOfFuel = litresOfFuel;
}

void Ford::refuel(int litres) {
    if (litresOfFuel + litres > 60.0)
        litresOfFuel = 60.0;
    else
        litresOfFuel += litres;
}

void Ford::drive(int kms) {
    float co2Emissions = 234.0 * kms;
    if (litresOfFuel >= 5.0 * static_cast<float>(kms) / 5.0) {
        litresOfFuel -= static_cast<float>(kms) / 5.0;
        if (litresOfFuel < 0.0)
            litresOfFuel = 0.0;
    }
    else {
        co2Emissions += 234.0 * litresOfFuel;
        litresOfFuel = 0.0;
    }
    set_emissions(get_emissions() + static_cast<int>(co2Emissions));
}
