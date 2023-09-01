#include <iostream>
#include "ParkingLot.h"

ParkingLot::ParkingLot(int maxCapacity)
    : maxCapacity(maxCapacity), count(0)
{
    vehicles = new Vehicle*[maxCapacity];
}

ParkingLot::~ParkingLot()
{
    for (int i = 0; i < count; i++) {
        delete vehicles[i];
    }
    delete[] vehicles;
}

void ParkingLot::parkVehicle(Vehicle* vehicle)
{
    if (count >= maxCapacity) {
        std::cout << "The lot is full" << std::endl;
        return;
    }
    vehicles[count++] = vehicle;
}

void ParkingLot::unparkVehicle(int id)
{
    int index = -1;
    for (int i = 0; i < count; i++) {
        if (vehicles[i]->getID() == id) {
            index = i;
            break;
        }
    }
    if (index == -1) {
        std::cout << "Vehicle not in the lot" << std::endl;
        return;
    }
    delete vehicles[index];
    count--;
    for (int i = index; i < count; i++) {
        vehicles[i] = vehicles[i+1];
    }
}

int ParkingLot::getCount() const
{
    return count;
}

int ParkingLot::countOverstayingVehicles(int maxParkingDuration) const {
    int count = 0;
    std::time_t currentTime = std::time(nullptr);

    for (int i = 0; i < count; ++i) {
        int parkingDuration = static_cast<int>(currentTime - vehicles[i]->getParkingDuration());
        if (parkingDuration > maxParkingDuration) {
            count++;
        }
    }
    return count;
}