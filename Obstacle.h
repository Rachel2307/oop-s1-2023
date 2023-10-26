#ifndef OBSTACLE_H
#define OBSTACLE_H
#include "GridUnit.h"
#include "Modifier.h"
using namespace std;

class Obstacle : public GridUnit, public Modifier {
    protected:
        bool active;
    public:
        Obstacle(int x, int y) : GridUnit(x, y, 'O') {}
        bool isActive() {
            return active;
        }
        void apply(GridUnit& unit) override {
            unit.setEntity('0');
            //unit = GridUnit(0, 0, 'O');
            active = false;
        }
};

#endif 