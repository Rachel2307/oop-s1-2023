#include <iostream>
#include "Car.h"

int main() {
    Car car1; // Using default constructor
    Car car2(15000); // Creating a car with a price of 15000

    std::cout << "Car 1 Price: " << car1.get_price() << std::endl;
    std::cout << "Car 1 Emissions: " << car1.get_emissions() << std::endl;

    car1.set_price(20000); // Setting the price of car1 to 20000
    car1.drive(10); // Driving car1 for 10 kms

    std::cout << "Car 1 Price after setting: " << car1.get_price() << std::endl;
    std::cout << "Car 1 Emissions after driving: " << car1.get_emissions() << std::endl;

    std::cout << "Car 2 Price: " << car2.get_price() << std::endl;
    std::cout << "Car 2 Emissions: " << car2.get_emissions() << std::endl;

    return 0;
}
