#ifndef GAME_H
#define GAME_H
#include "GameEntity.h"
#include "Ship.h"
#include "Mine.h"
#include "Utils.h"
#include <vector>

class Game {
private:
    std::vector<GameEntity*> entities;

public:
    Game() {}

    std::vector<GameEntity*> initGame(int numShips, int numMines, int gridWidth, int gridHeight) {
        entities.clear(); // Clear any existing entities
        for (int i = 0; i < numShips; ++i) {
            std::tuple<int, int> pos = Utils::generateRandomPos(gridWidth, gridHeight);
            entities.push_back(new Ship(std::get<0>(pos), std::get<1>(pos)));
        }
        for (int i = 0; i < numMines; ++i) {
            std::tuple<int, int> pos = Utils::generateRandomPos(gridWidth, gridHeight);
            entities.push_back(new Mine(std::get<0>(pos), std::get<1>(pos)));
        }
        return entities;
    }

    void gameLoop(int maxIterations, double mineDistanceThreshold) {
        for (int iteration = 0; iteration < maxIterations; ++iteration) {
            // Move all Ship objects
            for (GameEntity* entity : entities) {
                if (entity->getType() == 'S') {
                    Ship* ship = dynamic_cast<Ship*>(entity);
                    if (ship) {
                        ship->move(1, 0);
                    }
                }
            }

            // Check for ship-mine collisions and explode the mines
            for (GameEntity* entity : entities) {
                if (entity->getType() == 'M') {
                    Mine* mine = dynamic_cast<Mine*>(entity);
                    if (mine) {
                        for (GameEntity* entity2 : entities) {
                            if (entity2->getType() == 'S') {
                                Ship* ship = dynamic_cast<Ship*>(entity2);
                                if (ship) {
                                    double distance = Utils::calculateDistance(mine->getPos(), ship->getPos());
                                    if (distance < mineDistanceThreshold) {
                                        Explosion explosion = mine->explode();
                                        entity2->setType('X'); // Mark ship as destroyed
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    // Destructor to free memory for entities
    ~Game() {
        for (GameEntity* entity : entities) {
            if (entity->getType() == 'S') {
                delete dynamic_cast<Ship*>(entity);
            } else if (entity->getType() == 'M') {
                delete dynamic_cast<Mine*>(entity);
            }
        }
    }

};

#endif // GAME_H
