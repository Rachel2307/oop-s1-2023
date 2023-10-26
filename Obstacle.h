#ifndef OBSTACLE_H
#define OBSTACLE_H

#include "GridUnit.h"
#include "Modifier.h"

class Obstacle : public GridUnit, public Modifier {
private:
    bool active;

public:
    Obstacle(int x, int y) : GridUnit(x, y, 'O'), active(true) {}

    bool isActive() {
        return active;
    }

    void apply(GridUnit& unit) override {
        unit.setEntity('O');
        active = false;
    }
};

#endif
