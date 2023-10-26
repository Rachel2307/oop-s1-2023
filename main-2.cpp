// main-2.cpp
#include <iostream>
#include "Obstacle.h"
#include "Avatar.h"

int main() {
    Obstacle obstacle(3, 4);
    Avatar avatar(1, 1);

    std::cout << "Initial state:" << std::endl;
    std::cout << "Obstacle is active: " << obstacle.isActive() << std::endl;
    std::cout << "Avatar coordinates: " << std::get<0>(avatar.getCoordinates()) << ", " << std::get<1>(avatar.getCoordinates()) << std::endl;

    obstacle.apply(avatar);

    std::cout << "\nAfter applying Obstacle to Avatar:" << std::endl;
    std::cout << "Obstacle is active: " << obstacle.isActive() << std::endl;
    std::cout << "Avatar coordinates: " << std::get<0>(avatar.getCoordinates()) << ", " << std::get<1>(avatar.getCoordinates()) << std::endl;

    avatar.shift(2, 3);

    std::cout << "\nAfter shifting Avatar:" << std::endl;
    std::cout << "Avatar coordinates: " << std::get<0>(avatar.getCoordinates()) << ", " << std::get<1>(avatar.getCoordinates()) << std::endl;

    return 0;
}
