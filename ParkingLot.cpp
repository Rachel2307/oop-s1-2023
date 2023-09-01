#include "ParkingLot.h"
#include <iostream>

ParkingLot::ParkingLot(int capacity) : maxCapacity(capacity), currentCount(0) {
    vehicles.resize(maxCapacity, nullptr);
}

ParkingLot::~ParkingLot() {
    for (Vehicle* vehicle : vehicles) {
        delete vehicle; // Free memory for parked vehicles
    }
}

int ParkingLot::getCount() const {
    return currentCount;
}

void ParkingLot::parkVehicle(Vehicle* vehicle) {
    if (currentCount < maxCapacity) {
        for (int i = 0; i < maxCapacity; ++i) {
            if (!vehicles[i]) {
                vehicles[i] = vehicle;
                currentCount++;
                return;
            }
        }
    }
    std::cout << "The lot is full" << std::endl;
}

void ParkingLot::unparkVehicle(int id) {
    for (int i = 0; i < maxCapacity; ++i) {
        if (vehicles[i] && vehicles[i]->getID() == id) {
            delete vehicles[i];
            vehicles[i] = nullptr;
            currentCount--;
            return;
        }
    }
    std::cout << "Vehicle not in the lot" << std::endl;
}

int ParkingLot::countOverstayingVehicles(int maxParkingDuration) const {
    int count = 0;
    for (const Vehicle* vehicle : vehicles) {
        if (vehicle && vehicle->getParkingDuration() > maxParkingDuration) {
            count++;
        }
    }
    return count;
}
