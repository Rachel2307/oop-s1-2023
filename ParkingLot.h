#ifndef PARKINGLOT_H
#define PARKINGLOT_H

#include "vehicle.h"

class ParkingLot {
private:
    int maxCapacity;
    int vehicleCount;
    Vehicle** vehicles;

public:
    ParkingLot(int capacity);
    ~ParkingLot();
    int getCount() const;
    bool parkVehicle(Vehicle* vehicle);
    void unparkVehicle(int id);
    int countOverstayingVehicles(int maxParkingDuration) const;
};

#endif