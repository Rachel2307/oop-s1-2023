#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

class Car : public Vehicle {
 public:
  Car(int id);
  Car(int id, std::time_t timeOfEntry);
  int getParkingDuration() const;
};

#endif
