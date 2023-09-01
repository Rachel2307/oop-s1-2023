#include <iostream>
#include "Vehicle.h"
#include "ParkingLot.h"

ParkingLot::ParkingLot(int capacity) : maxCapacity(capacity), currentCount(0) {
    vehicles = new Vehicle*[maxCapacity];
    for (int i = 0; i < maxCapacity; ++i) {
        vehicles[i] = nullptr;
    }
}

ParkingLot::~ParkingLot() {
    for (int i = 0; i < currentCount; ++i) {
        delete vehicles[i];
    }
    delete[] vehicles;
}

void ParkingLot::parkVehicle(Vehicle* vehicle) {
    if (currentCount < maxCapacity) {
        vehicles[currentCount] = vehicle;
        ++currentCount;
    } else {
        std::cout << "The lot is full." << std::endl;
    }
}

void ParkingLot::unparkVehicle(int id) {
    for (int i = 0; i < currentCount; ++i) {
        if (vehicles[i]->getID() == id) {
            delete vehicles[i];
            --currentCount;
            for (int j = i; j < currentCount; ++j) {
                vehicles[j] = vehicles[j + 1];
            }
            vehicles[currentCount] = nullptr;
            return;
        }
    }
    std::cout << "Vehicle not in the lot." << std::endl;
}

int ParkingLot::getCount() const {
    return currentCount;
}

int ParkingLot::countOverStayingVehicles(int maxParkingDuration) const {
    int count = 0;
    for (int i = 0; i < currentCount; ++i) {
        if (vehicles[i]->getParkingDuration() > maxParkingDuration) {
            ++count;
        }
    }
    return count;
}