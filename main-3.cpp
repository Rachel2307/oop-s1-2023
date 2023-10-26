#include <iostream>
#include "GameSession.h"
int main() {
    GameSession game;
    game.initGameSession(2, 3, 10, 5);
    game.gameCycle(20, 2.0);
    
    // Clean up allocated memory
    for (GridUnit* unit : game.getGrid()) {
        delete unit;
    }

    return 0;
}