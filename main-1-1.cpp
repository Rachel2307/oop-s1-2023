#include <iostream>
#include <vector>

#include "Bus.h"
#include "Car.h"
#include "Motorbike.h"
#include "Vehicle.h"

int main() {
  std::vector<Vehicle*> vehicles;

  int id;
  std::time_t parkingDuration = 0;

  char vehicleType;

  do {
    std::cout
        << "Enter your vehicle type (C for car, B for bus, M for motorbike, Q "
           "to quit): ";
    std::cin >> vehicleType;

    if (vehicleType == 'C') {
      std::cout << "Enter vehicle ID: ";
      std::cin >> id;
      vehicles.push_back(new Car(id, parkingDuration));
    } else if (vehicleType == 'B') {
      std::cout << "Enter vehicle ID: ";
      std::cin >> id;
      vehicles.push_back(new Bus(id, parkingDuration));
    } else if (vehicleType == 'M') {
      std::cout << "Enter vehicle ID: ";
      std::cin >> id;
      vehicles.push_back(new Motorbike(id, parkingDuration));
    }
  } while (vehicleType != 'Q');

  for (const auto vehicle : vehicles) {
    std::cout << "Vehicle ID: " << vehicle->getID()
              << ", Parking Duration: " << vehicle->getTimeOfEntry()
              << " seconds" << std::endl;
    delete vehicle;
  }

  return 0;
}
