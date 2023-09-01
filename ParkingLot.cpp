#include "ParkingLot.h"
#include <iostream>

ParkingLot::ParkingLot(int capacity) : maxCapacity(capacity), vehicleCount(0) {
    vehicles = new Vehicle*[maxCapacity];
}

ParkingLot::~ParkingLot() {
    for (int i = 0; i < vehicleCount; ++i) {
        delete vehicles[i];
    }
    delete[] vehicles;
}

int ParkingLot::getCount() const {
    return vehicleCount;
}

bool ParkingLot::parkVehicle(Vehicle* vehicle) {
    if (vehicleCount < maxCapacity) {
        vehicles[vehicleCount++] = vehicle;
        return true;
    } else {
        std::cout << "The lot is full" << std::endl;
        return false;
    }
}

void ParkingLot::unparkVehicle(int id) {
    for (int i = 0; i < vehicleCount; ++i) {
        if (vehicles[i]->getID() == id) {
            delete vehicles[i];
            for (int j = i; j < vehicleCount - 1; ++j) {
                vehicles[j] = vehicles[j + 1];
            }
            --vehicleCount;
            return;
        }
    }
    std::cout << "Vehicle not in the lot" << std::endl;
}

int ParkingLot::countOverstayingVehicles(int maxParkingDuration) const {
    int count = 0;
    std::time_t currentTime = std::time(nullptr);

    for (int i = 0; i < vehicleCount; ++i) {
        if (vehicles[i]->getParkingDuration() > maxParkingDuration) {
            ++count;
        }
    }

    return count;
}
