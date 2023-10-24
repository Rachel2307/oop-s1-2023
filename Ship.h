#ifndef SHIP_H
#define SHIP_H
#include "GameEntity.h"

class Ship : public GameEntity {
public:
    Ship(int x, int y) : GameEntity(x, y, 'S') {}

    void move(int dx, int dy) {
        std::tuple<int, int> currentPosition = getPos();
        std::get<0>(position) = std::get<0>(currentPosition) + dx;
        std::get<1>(position) = std::get<1>(currentPosition) + dy;
    }

    // Override the update function
    void update() override {}
};

#endif // SHIP_H
