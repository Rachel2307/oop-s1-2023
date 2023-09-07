#include <iostream>
#include "Ford.h"

int main() {
    Ford ford1; // Using default constructor
    Ford ford2(12345, 20000); // Creating a Ford with badge number 12345 and price 20000

    std::cout << "Ford 1 Badge Number: " << ford1.get_badgeNumber() << std::endl;
    std::cout << "Ford 1 Price: " << ford1.get_price() << std::endl;

    ford1.set_badgeNumber(54321); // Setting the badge number of ford1 to 54321
    ford1.refuel(20); // Refueling ford1 with 20 litres
    ford1.drive(20); // Driving ford1 for 20 km

    std::cout << "Ford 1 Badge Number after setting: " << ford1.get_badgeNumber() << std::endl;
    std::cout << "Ford 1 Litres of Fuel after refueling: " << ford1.get_litresOfFuel() << std::endl;
    std::cout << "Ford 1 Emissions after driving: " << ford1.get_emissions() << std::endl;

    std::cout << "Ford 2 Badge Number: " << ford2.get_badgeNumber() << std::endl;
    std::cout << "Ford 2 Price: " << ford2.get_price() << std::endl;

    return 0;
}
