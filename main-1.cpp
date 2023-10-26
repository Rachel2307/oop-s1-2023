#include <iostream>
#include <tuple>
#include "GridUnit.h"
#include "Helper.h"
#include "Modifier.h"

int main() {
    GridUnit gridunit(1, 2, 'A');
    std::tuple<int, int> position = gridunit.getCoordinates();
    char type = gridunit.getEntity();
    gridunit.setCoordinates(3, 4);
    gridunit.setEntity('B');

    Modifier* modifier; // You can't create an instance of a pure virtual class

    std::tuple<int, int> randomPos = Helper::generateRandomCoordinates(5, 5);
    double distance = Helper::calculateDistance(std::make_tuple(1, 2), std::make_tuple(4, 6));

    /*std::cout << "Position: (" << std::get<0>(coordinates) << ", " << std::get<1>(position) << "), Type: " << type << std::endl;
    std::cout << "New Position: (" << std::get<0>(cell.getPos()) << ", " << std::get<1>(cell.getPos()) << "), New Type: " << cell.getType() << std::endl;
    std::cout << "Random Position: (" << std::get<0>(randomPos) << ", " << std::get<1>(randomPos) << "), Distance: " << distance << std::endl;
    */
    return 0;
}
