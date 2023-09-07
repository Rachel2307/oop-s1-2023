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
    while (kms > 0 && litresOfFuel > 0.0) {
        Car::drive(1); // Call the drive method from the Car class
        litresOfFuel -= 1.0 / 5.0; // Consume 1L of fuel for every 5km driven
        kms--;
    }
}
