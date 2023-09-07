#include <iostream>
#include "Tesla.h"

int main() {
    Tesla tesla1; // Using default constructor
    Tesla tesla2('X', 75000); // Creating a Tesla with model 'X' and price 75000

    std::cout << "Tesla 1 Model: " << tesla1.get_model() << std::endl;
    std::cout << "Tesla 1 Price: " << tesla1.get_price() << std::endl;

    tesla1.set_model('Y'); // Setting the model of tesla1 to 'Y'
    tesla1.chargeBattery(30); // Charging tesla1 for 30 minutes
    tesla1.drive(20); // Driving tesla1 for 20 km

    std::cout << "Tesla 1 Model after setting: " << tesla1.get_model() << std::endl;
    std::cout << "Tesla 1 Battery Percentage after charging: " << tesla1.get_batteryPercentage() << std::endl;
    std::cout << "Tesla 1 Emissions after driving: " << tesla1.get_emissions() << std::endl;

    std::cout << "Tesla 2 Model: " << tesla2.get_model() << std::endl;
    std::cout << "Tesla 2 Price: " << tesla2.get_price() << std::endl;

    return 0;
}
