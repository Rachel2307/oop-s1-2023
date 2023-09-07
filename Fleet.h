#ifndef FLEET_H
#define FLEET_H

#include "Car.h"

class Fleet {
public:
    Fleet();
    Car** get_fleet();
    ~Fleet();
private:
    Car** fleet;
};

#endif // FLEET_H
