#ifndef VEHICLE_H
#define VEHICLE_H
#include <ctime>

class Vehicle{
    private:
        std::time_t timeOfEntry;
        int ID;
    public:
        Vehicle(int ID);
        int getID() const;
        int getParkingDuration() const;
};
#endif