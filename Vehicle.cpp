#include "Vehicle.h"

Vehicle::Vehicle(int id) : id(id), timeOfEntry(0) {}

Vehicle::Vehicle(int id, std::time_t timeOfEntry)
    : id(id), timeOfEntry(timeOfEntry) {}

int Vehicle::getID() const { return id; }

std::time_t Vehicle::getTimeOfEntry() const { return timeOfEntry; }
