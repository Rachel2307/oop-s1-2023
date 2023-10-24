#include <iostream>
#include "Game.h"
#include "GameEntity.h"
#include "Ship.h"
#include "Mine.h"
#include "Explosion.h"

int main() {
    // Create a Game object
    Game game;

    // Initialize the game with 2 ships, 3 mines, grid width: 10, grid height: 10
    std::vector<GameEntity*> entities = game.initGame(2, 3, 10, 10);

    // Display the initial positions of entities
    std::cout << "Initial Entity Positions:" << std::endl;
    for (GameEntity* entity : entities) {
        std::tuple<int, int> pos = entity->getPos();
        char type = entity->getType();
        std::cout << "Type: " << type << " Position: (" << std::get<0>(pos) << ", " << std::get<1>(pos) << ")\n";
    }

    // Simulate the game with a maximum of 10 iterations and mine distance threshold of 3
    game.gameLoop(10, 3);

    // Display the final positions of entities
    std::cout << "\nFinal Entity Positions:" << std::endl;
    for (GameEntity* entity : entities) {
        std::tuple<int, int> pos = entity->getPos();
        char type = entity->getType();
        std::cout << "Type: " << type << " Position: (" << std::get<0>(pos) << ", " << std::get<1>(pos) << ")\n";
    }

    // Clean up and free memory for dynamically allocated entities
    for (GameEntity* entity : entities) {
        delete entity;
    }

    return 0;
}
