#ifndef GAMESESSION_H
#define GAMESESSION_H
#include <vector>
#include <iostream> 
#include "GridUnit.h"
#include "Obstacle.h"
#include "Avatar.h"
#include "Helper.h"

class GameSession {
private:
    std::vector<GridUnit*> grid;

public:
    GameSession() {}

    std::vector<GridUnit*>& getGrid() {
        return grid;
    }

    void initGameSession(int numAvatars, int numObstacles, int gridWidth, int gridHeight) {
        grid.clear(); // Clear the existing grid units

        // Create Avatars at random positions
        for (int i = 0; i < numAvatars; ++i) {
            std::tuple<int, int> coords = Helper::generateRandomCoordinates(gridWidth, gridHeight);
            grid.push_back(new Avatar(std::get<0>(coords), std::get<1>(coords)));
        }

        // Create Obstacles at random positions
        for (int i = 0; i < numObstacles; ++i) {
            std::tuple<int, int> coords = Helper::generateRandomCoordinates(gridWidth, gridHeight);
            grid.push_back(new Obstacle(std::get<0>(coords), std::get<1>(coords)));
        }
    }

    void gameCycle(int maxCycles, double obstacleActivationDistance) {
        for (int cycle = 1; cycle <= maxCycles; ++cycle) {
            for (GridUnit* unit : grid) {
                if (dynamic_cast<Avatar*>(unit)) {
                    Avatar* avatar = dynamic_cast<Avatar*>(unit);
                    avatar->shift(1, 0);

                    for (GridUnit* other : grid) {
                        if (dynamic_cast<Obstacle*>(other)) {
                            Obstacle* obstacle = dynamic_cast<Obstacle*>(other);
                            if (Helper::calculateDistance(avatar->getCoordinates(), obstacle->getCoordinates()) <= obstacleActivationDistance) {
                                obstacle->apply(*avatar);
                            }
                        }
                    }

                    std::tuple<int, int> coords = avatar->getCoordinates();
                    int x = std::get<0>(coords);
                    int y = std::get<1>(coords);
                    if (x < 0 || x >= maxCycles) {
                        std::cout << "Avatar has won the game!" << std::endl;
                        return;
                    }
                }
            }

            if (cycle == maxCycles) {
                std::cout << "Maximum number of cycles reached. Game over." << std::endl;
            }
        }
    }

    ~GameSession() {
        for (GridUnit* unit : grid) {
            delete unit;
        }
    }
};

#endif
