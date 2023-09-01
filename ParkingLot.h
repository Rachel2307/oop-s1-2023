#ifndef PARKINGLOT_H
#define PARKINGLOT_H

#include "Vehicle.h"

class ParkingLot {
public:
    ParkingLot(int maxCapacity);
    ~ParkingLot();
    void parkVehicle(Vehicle* vehicle);
    void unparkVehicle(int id);
    int getCount() const;

private:
    int maxCapacity;
    int count;
    Vehicle** vehicles;
    int countOverstayingVehicles(int maxParkingDuration) const;
};

#endif