#include "ParkingLot.h"

#include <iostream>

ParkingLot::ParkingLot(int maxCapacity)
    : maxCapacity(maxCapacity), vehicleCount(0) {
  vehicles = new Vehicle*[maxCapacity];
  for (int i = 0; i < maxCapacity; i++) {
    vehicles[i] = nullptr;
  }
}

ParkingLot::~ParkingLot() {
  for (int i = 0; i < vehicleCount; i++) {
    delete vehicles[i];
  }
  delete[] vehicles;
}

int ParkingLot::getCount() const { return vehicleCount; }

void ParkingLot::parkVehicle(Vehicle* vehicle) {
  if (vehicleCount < maxCapacity) {
    vehicles[vehicleCount] = vehicle;
    vehicleCount++;
  } else {
    std::cout << "The lot is full" << std::endl;
  }
}

void ParkingLot::unparkVehicle(int id) {
  for (int i = 0; i < vehicleCount; i++) {
    if (vehicles[i]->getID() == id) {
      delete vehicles[i];
      vehicles[i] = vehicles[vehicleCount - 1];
      vehicles[vehicleCount - 1] = nullptr;
      vehicleCount--;
      return;
    }
  }
  std::cout << "Vehicle not in the lot" << std::endl;
}

int ParkingLot::countOverstayingVehicles(int maxParkingDuration) const {
  int count = 0;
  std::time_t currentTime = std::time(nullptr);

  for (int i = 0; i < vehicleCount; i++) {
    if (vehicles[i]->getParkingDuration() > maxParkingDuration) {
      count++;
    }
  }

  return count;
}
