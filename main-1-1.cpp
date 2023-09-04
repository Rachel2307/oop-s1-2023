#include <iostream>
#include "Appliance.h"

int main() {
    Appliance appliance1;
    Appliance appliance2(1000);

    std::cout << "Appliance 1 Power Rating: " << appliance1.get_powerRating() << std::endl;
    std::cout << "Appliance 1 isOn: " << (appliance1.get_isOn() ? "On" : "Off") << std::endl;
    appliance1.turnOn();
    std::cout << "Turning Appliance 1 On..." << std::endl;
    std::cout << "Appliance 1 isOn: " << (appliance1.get_isOn() ? "On" : "Off") << std::endl;
    
    std::cout << "Appliance 2 Power Rating: " << appliance2.get_powerRating() << std::endl;
    std::cout << "Appliance 2 isOn: " << (appliance2.get_isOn() ? "On" : "Off") << std::endl;
    appliance2.turnOff();
    std::cout << "Turning Appliance 2 Off..." << std::endl;
    std::cout << "Appliance 2 isOn: " << (appliance2.get_isOn() ? "On" : "Off") << std::endl;

    appliance2.turnOn();
    std::cout << "Turning Appliance 2 On..." << std::endl;
    std::cout << "Appliance 2 isOn: " << (appliance2.get_isOn() ? "On" : "Off") << std::endl;
    return 0;
}




