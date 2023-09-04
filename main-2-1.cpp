#include <iostream>
#include "Fridge.h"

int main() {
    Fridge fridge1;
    Fridge fridge2(500, 200.0);

    std::cout << "Fridge 1 Power Rating: " << fridge1.get_powerRating() << std::endl;
    std::cout << "Fridge 1 Volume: " << fridge1.getVolume() << " litres" << std::endl;
    fridge1.setVolume(150.0);
    std::cout << "Setting Fridge 1 Volume to 150.0 litres..." << std::endl;
    std::cout << "Fridge 1 Power Consumption: " << fridge1.getPowerConsumption() << " watts" << std::endl;

    std::cout << "Fridge 2 Power Rating: " << fridge2.get_powerRating() << std::endl;
    std::cout << "Fridge 2 Volume: " << fridge2.getVolume() << " litres" << std::endl;
    std::cout << "Fridge 2 Power Consumption: " << fridge2.getPowerConsumption() << " watts" << std::endl;

    return 0;
}
