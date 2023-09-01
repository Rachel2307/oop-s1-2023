#ifndef BUS_H
#define BUS_H

#include "Vehicle.h"

class Bus : public Vehicle {
 public:
  Bus(int id);
  Bus(int id, std::time_t timeOfEntry);
  int getParkingDuration() const;
};

#endif
