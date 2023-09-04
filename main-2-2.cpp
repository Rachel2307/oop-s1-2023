#include <iostream>
#include "TV.h"

int main() {
    TV tv1;
    TV tv2(200, 55.0);

    std::cout << "TV 1 Power Rating: " << tv1.get_powerRating() << std::endl;
    std::cout << "TV 1 Screen Size: " << tv1.getScreenSize() << " inches" << std::endl;
    tv1.setScreenSize(42.0);
    std::cout << "Setting TV 1 Screen Size to 42.0 inches..." << std::endl;
    std::cout << "TV 1 Power Consumption: " << tv1.getPowerConsumption() << " watts" << std::endl;

    std::cout << "TV 2 Power Rating: " << tv2.get_powerRating() << std::endl;
    std::cout << "TV 2 Screen Size: " << tv2.getScreenSize() << " inches" << std::endl;
    std::cout << "TV 2 Power Consumption: " << tv2.getPowerConsumption() << " watts" << std::endl;

    return 0;
}
