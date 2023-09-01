#ifndef MOTORBIKE_H
#define MOTORBIKE_H

#include "Vehicle.h"

class Motorbike : public Vehicle {
 public:
  Motorbike(int id);
  Motorbike(int id, std::time_t timeOfEntry);
  int getParkingDuration() const;
};

#endif
