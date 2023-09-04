#include <iostream>
#include "House.h"
#include "TV.h"
#include "Fridge.h"

int main() {
    House myHouse(3); // Create a House with space for 3 appliances

    Appliance* fridge = new Fridge(200, 18.0);
    Appliance* tv = new TV(100, 42.0);

    if (myHouse.addAppliance(fridge)) {
        std::cout << "Fridge added to the house." << std::endl;
    }
    if (myHouse.addAppliance(tv)) {
        std::cout << "TV added to the house." << std::endl;
    }

    double totalPowerConsumption = myHouse.getTotalPowerConsumption();
    std::cout << "Total power consumption in the house: " << totalPowerConsumption << " watts" << std::endl;

    // Don't forget to deallocate the appliances
    delete fridge;
    delete tv;

    return 0;
}
