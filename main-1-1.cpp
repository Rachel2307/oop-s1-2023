#include <iostream>
#include <vector>
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"
int main() {
    int numCars, numBuses, numMotorbikes;
    std::cout << "Enter number of cars: ";
    std::cin >> numCars;
    std::cout << "Enter number of buses: ";
    std::cin >> numBuses;
    std::cout << "Enter number of motorbikes: ";
    std::cin >> numMotorbikes;

    const int totalVehicles = numCars + numBuses + numMotorbikes;
    Vehicle* vehicles[totalVehicles];
    int vehicleCount = 0;

    for (int i = 0; i < numCars; i++) {
        int id;
        std::cout << "Enter car ID: ";
        std::cin >> id;
        vehicles[vehicleCount++] = new Car(id);
    }
    for (int i = 0; i < numBuses; i++) {
        int id;
        std::cout << "Enter bus ID: ";
        std::cin >> id;
        vehicles[vehicleCount++] = new Bus(id);
    }
    for (int i = 0; i < numMotorbikes; i++) {
        int id;
        std::cout << "Enter motorbike ID: ";
        std::cin >> id;
        vehicles[vehicleCount++] = new Motorbike(id);
    }

    for (int i = 0; i < totalVehicles; i++) {
        std::cout << "Vehicle " << vehicles[i]->getID() << " parked for "
                  << vehicles[i]->getParkingDuration() << " seconds\n";
        delete vehicles[i];
    }

    return 0;
}
