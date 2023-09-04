#include <ctime>
#include <iostream>

#include "Bus.h"
#include "Car.h"
#include "Motorbike.h"
#include "ParkingLot.h"

int main() {
  ParkingLot parkingLot(10);

  char vehicleType;

  do {
    std::cout
        << "Enter your vehicle type (C for car, B for bus, M for motorbike, Q "
           "to quit): ";
    std::cin >> vehicleType;
    if (vehicleType == 'C' || vehicleType == 'B' || vehicleType == 'M') {
      Vehicle* vehicle = nullptr;
      int id;
      std::time_t parkingDuration;
      std::cout << "Enter vehicle ID: ";
      std::cin >> id;
      std::cout << "Enter parking duration (in seconds): ";
      std::cin >> parkingDuration;

      if (vehicleType == 'C') {
        vehicle = new Car(id, parkingDuration);
      } else if (vehicleType == 'B') {
        vehicle = new Bus(id, parkingDuration);
      } else if (vehicleType == 'M') {
        vehicle = new Motorbike(id, parkingDuration);
      }

      parkingLot.parkVehicle(vehicle);
    }
  } while (vehicleType != 'Q');

  int maxParkingDuration = 15;
  int overstayingCount =
      parkingLot.countOverstayingVehicles(maxParkingDuration);

  std::cout << "Number of vehicles overstaying for more than "
            << maxParkingDuration << " seconds: " << overstayingCount
            << std::endl;

  return 0;
}