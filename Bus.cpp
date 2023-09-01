#include "Bus.h"

#include "Vehicle.h"

Bus::Bus(int id) : Vehicle(id, 0) {}

Bus::Bus(int id, std::time_t timeOfEntry) : Vehicle(id, timeOfEntry) {}

int Bus::getParkingDuration() const {
  std::time_t currentTime = 4;
  std::time_t entryTime = getTimeOfEntry();
  int parkingDuration = (currentTime - entryTime) * 0.85;
  return parkingDuration;
}
