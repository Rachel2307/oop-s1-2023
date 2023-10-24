#include "Utils.h"
#include <random>
#include <cmath>

std::tuple<int, int> Utils::generateRandomPos(int gridWidth, int gridHeight) {
    std::random_device rd;
    std::default_random_engine eng(rd());
    std::uniform_int_distribution<int> widthDist(0, gridWidth - 1);
    std::uniform_int_distribution<int> heightDist(0, gridHeight - 1);
    
    int x = widthDist(eng);
    int y = heightDist(eng);
    
    return std::make_tuple(x, y);
}

double Utils::calculateDistance(std::tuple<int, int> pos1, std::tuple<int, int> pos2) {
    int x1 = std::get<0>(pos1);
    int y1 = std::get<1>(pos1);
    int x2 = std::get<0>(pos2);
    int y2 = std::get<1>(pos2);

    return std::sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}
