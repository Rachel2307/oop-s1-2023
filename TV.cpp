#include "TV.h"

TV::TV() : Appliance(), screenSize(0.0) {
    // The default constructor sets power rating to 0 and screen size to 0.0
}

TV::TV(int powerRating, double screenSize) : Appliance(powerRating), screenSize(screenSize) {
    // The constructor sets power rating and screen size based on provided arguments
}

void TV::setScreenSize(double screenSize) {
    this->screenSize = screenSize;
}

double TV::getScreenSize() const {
    return screenSize;
}

double TV::getPowerConsumption() const {
    return get_powerRating() * (screenSize / 10.0);
}
