#ifndef GAMEENTITY_H
#define GAMEENTITY_H
#include <tuple>

class GameEntity {
protected:
    std::tuple<int, int> position;
    char type;

public:
    GameEntity(int x, int y, char entity_type) : position(std::make_tuple(x, y)), type(entity_type) {}

    std::tuple<int, int> getPos() {
        return position;
    }

    char getType() {
        return type;
    }
};

#endif // GAMEENTITY_H
