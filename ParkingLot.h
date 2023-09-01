#ifndef PARKINGLOT_H
#define PARKINGLOT_H
#include "Vehicle.h"

class ParkingLot {
    private: 
        int maxCapacity;
        int currentCount;
        Vehicle** vehicles;
    public:
    ParkingLot(int capacity);
    ~ParkingLot();
    void parkVehicle(Vehicle* vehicle);
    void unparkVehicle(int ID);
    int getCount() const;
    int countOverStayingVehicles(int maxParkingDuration) const;
};
#endif