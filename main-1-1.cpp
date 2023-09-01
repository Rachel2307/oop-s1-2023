#include <iostream>
#include <vector>
#include "vehicle.h"
#include "car.h"
#include "bus.h"
#include "motorbike.h"

int main() {
    std::vector<Vehicle*> vehicles;

    int numCars, numBuses, numMotorbikes;
    
    std::cout << "Enter the number of cars: ";
    std::cin >> numCars;

    std::cout << "Enter the number of buses: ";
    std::cin >> numBuses;

    std::cout << "Enter the number of motorbikes: ";
    std::cin >> numMotorbikes;

    // Create and store vehicles
    for (int i = 1; i <= numCars; ++i) {
        vehicles.push_back(new Car(i));
    }

    for (int i = 1; i <= numBuses; ++i) {
        vehicles.push_back(new Bus(i));
    }

    for (int i = 1; i <= numMotorbikes; ++i) {
        vehicles.push_back(new Motorbike(i));
    }

    // Print parking durations
    for (const Vehicle* vehicle : vehicles) {
        std::cout << "Vehicle ID: " << vehicle->getID()
                  << ", Parking Duration: " << vehicle->getParkingDuration() << " seconds" << std::endl;
    }

    // Clean up allocated memory
    for (Vehicle* vehicle : vehicles) {
        delete vehicle;
    }

    return 0;
}
