#include "Car.h"
// default constructor
Car::Car() {
    price = 0;
    emissions = 0;
}
// creates a Car with a price
Car::Car(int price) {
    this->price = price;
    emissions = 0;
}

// set and get price
void Car::set_price() {
    this->price = price;
}

int Car::get_price() const {
    return price;
}

// set and get emissions
void Car::set_emissions() {
    this->emissions=emissions;
}

int Car::get_emissions() const {
    return emissions;
}

void Car::drive(int kms) const {
    int emissions = 20 * kms;
}