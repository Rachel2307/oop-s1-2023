#include "Car.h"

#include "Vehicle.h"

Car::Car(int id) : Vehicle(id, 0) {}

Car::Car(int id, std::time_t timeOfEntry) : Vehicle(id, timeOfEntry) {}

int Car::getParkingDuration() const {
  std::time_t currentTime = 4;
  std::time_t entryTime = getTimeOfEntry();
  int parkingDuration = (currentTime - entryTime) * 0.85;
  return parkingDuration;
}