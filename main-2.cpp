#include <iostream>
#include <tuple>
#include "GridUnit.h"
#include "Helper.h"
#include "Modifier.h"

int main() {
    GridUnit gridunit(1, 2, 'A');
    std::tuple<int, int> position = gridunit.getCoordinates();
    return 0;
}