#include <iostream>
#include "Fleet.h"

int main() {
    Fleet fleetObj;

    Car** fleetArray = fleetObj.get_fleet();

    std::cout << "Fleet cars:" << std::endl;
    for (int i = 0; i < 5; i++) {
        std::cout << "Car " << i + 1 << ": " << fleetArray[i]->get_price() << " Price" << std::endl;
    }

    return 0;
}
