#ifndef PARKINGLOT_H
#define PARKINGLOT_H

#include "Vehicle.h"

class ParkingLot {
 private:
  int maxCapacity;
  int vehicleCount;
  int maxParkingDuration = 15;
  Vehicle** vehicles;

 public:
  ParkingLot(int maxCapacity);
  ~ParkingLot();

  int getCount() const;
  void parkVehicle(Vehicle* vehicle);
  void unparkVehicle(int id);
  int countOverstayingVehicles(int maxParkingDuration) const;
};

#endif
