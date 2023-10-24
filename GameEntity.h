#ifndef GAMEENTITY_H
#define GAMEENTITY_H

#include <tuple>

class GameEntity {
public:
    GameEntity(int x, int y, char type);
    std::tuple<int, int> getPos();
    char getType();

private:
    std::tuple<int, int> position;
    char type;
};

#endif // GAMEENTITY_H
