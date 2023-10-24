#include <iostream>
#include "GameEntity.h"
#include "Effect.h"
#include "Explosion.h"
#include "Ship.h"
#include "Mine.h"

int main() {
    // Create a Ship and a Mine
    Ship ship(5, 5);
    Mine mine(7, 7);

    // Move the Ship
    ship.move(1, 1);

    // Display ship and mine properties
    std::cout << "Ship Position: (" << std::get<0>(ship.getPos()) << ", " << std::get<1>(ship.getPos()) << ")\n";
    std::cout << "Mine Position: (" << std::get<0>(mine.getPos()) << ", " << std::get<1>(mine.getPos()) << ")\n";

    // Create an Explosion and apply it to the Ship
    Explosion explosion(3, 3);
    explosion.apply(ship);

    // Display ship properties after the explosion
    std::cout << "Ship Position After Explosion: (" << std::get<0>(ship.getPos()) << ", " << std::get<1>(ship.getPos()) << ")\n";
    std::cout << "Ship Type After Explosion: " << ship.getType() << std::endl;

    return 0;
}
