#include "ParkingLot.h"
#include <iostream>

ParkingLot::ParkingLot(int capacity) : maxCapacity(capacity), count(0) {
    vehicles = new Vehicle*[maxCapacity];
}

ParkingLot::~ParkingLot() {
    for (int i = 0; i < count; ++i) {
        delete vehicles[i];
    }
    delete[] vehicles;
}

int ParkingLot::getCount() const {
    return count;
}

void ParkingLot::parkVehicle(Vehicle* vehicle) {
    if (count < maxCapacity) {
        vehicles[count] = vehicle;
        count++;
    } else {
        std::cout << "The lot is full" << std::endl;
    }
}

void ParkingLot::unparkVehicle(int id) {
    for (int i = 0; i < count; ++i) {
        if (vehicles[i]->getID() == id) {
            delete vehicles[i];
            count--;

            // Shift the remaining vehicles in the array
            for (int j = i; j < count; ++j) {
                vehicles[j] = vehicles[j + 1];
            }

            std::cout << "Vehicle with ID " << id << " has been removed from the lot." << std::endl;
            return;
        }
    }
    std::cout << "Vehicle not in the lot" << std::endl;
}
