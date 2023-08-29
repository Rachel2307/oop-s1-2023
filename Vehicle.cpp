#include "Vehicle.h"

Vehicle::Vehicle(int id):ID(id) {
    timeOfEntry = std::time(NULL);
}
int Vehicle::getID() const {
    return ID;
}

int Vehicle::getParkingDuration() const {
    std::time_t now = std::time(NULL);
    return difftime(now, timeOfEntry);
}