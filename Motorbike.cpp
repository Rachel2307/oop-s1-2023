#include "Motorbike.h"

#include "Vehicle.h"

Motorbike::Motorbike(int id) : Vehicle(id, 0) {}

Motorbike::Motorbike(int id, std::time_t timeOfEntry)
    : Vehicle(id, timeOfEntry) {}

int Motorbike::getParkingDuration() const {
  std::time_t currentTime = 4;
  std::time_t entryTime = getTimeOfEntry();
  int parkingDuration = (currentTime - entryTime) * 0.85;
  return parkingDuration;
}
