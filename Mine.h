#ifndef MINE_H
#define MINE_H
#include "GameEntity.h"
#include "Explosion.h"

class Mine : public GameEntity {
public:
    Mine(int x, int y) : GameEntity(x, y, 'M') {}

    Explosion explode() {
        // Set the mine's type to 'X' to mark it as exploded
        setType('X');
        // Create and return an Explosion object
        //return Explosion(getPos());
        return Explosion(std::get<0>(position), std::get<1>(position));
    }
    
    /*Explosion explode() {
        return Explosion(std::get<0>(position), std::get<1>(position));
    }*/

    // Override the update function
    void update() override {}
};

#endif // MINE_H
