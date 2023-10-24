#ifndef MINE_H
#define MINE_H
#include "GameEntity.h"
#include "Explosion.h"

class Mine : public GameEntity {
public:
    Mine(int x, int y) : GameEntity(x, y, 'M') {}

    Explosion explode() {
        return Explosion(std::get<0>(position), std::get<1>(position));
    }

    // Override the update function
    void update() override {}
};

#endif // MINE_H
