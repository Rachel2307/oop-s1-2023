#include <iostream>
#include "ParkingLot.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"

int main() {
    // Create a parking lot with a capacity of 10 vehicles
    ParkingLot parkingLot(10);

    // Park 5 Car objects, 3 Bus objects, and 2 Motorbike objects
    for (int i = 1; i <= 5; ++i) {
        parkingLot.parkVehicle(new Car(i));
    }
    for (int i = 6; i <= 8; ++i) {
        parkingLot.parkVehicle(new Bus(i));
    }
    for (int i = 9; i <= 10; ++i) {
        parkingLot.parkVehicle(new Motorbike(i));
    }

    // Count the number of overstaying vehicles
    int overstayingCount = parkingLot.countOverStayingVehicles(15);
    std::cout << "Number of overstaying vehicles: " << overstayingCount << std::endl;

    // Unpark a vehicle
    int idToUnpark;
    std::cout << "Enter the ID of the vehicle to unpark: ";
    std::cin >> idToUnpark;
    parkingLot.unparkVehicle(idToUnpark);

    return 0;
}