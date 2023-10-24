#include <iostream>
#include "Utils.h"
#include "GameEntity.h"
#include "Effect.h"
int main() {
    // Generate random positions
    std::tuple<int, int> pos1 = Utils::generateRandomPos(10, 10);
    std::tuple<int, int> pos2 = Utils::generateRandomPos(10, 10);

    // Calculate distance between positions
    double distance = Utils::calculateDistance(pos1, pos2);

    // Display the results
    std::cout << "Random Position 1: (" << std::get<0>(pos1) << ", " << std::get<1>(pos1) << ")\n";
    std::cout << "Random Position 2: (" << std::get<0>(pos2) << ", " << std::get<1>(pos2) << ")\n";
    std::cout << "Distance between positions: " << distance << std::endl;

    return 0;
}
