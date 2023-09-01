#include <iostream>
#include "Vehicle.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"
#include "ParkingLot.h"

int main() {
    ParkingLot parkingLot(10); // Create a parking lot with a capacity of 10

    // Park vehicles in the parking lot until it's full
    while (parkingLot.getCount() < 10) {
        int choice;
        std::cout << "Enter the type of vehicle to park (1: Car, 2: Bus, 3: Motorbike): ";
        std::cin >> choice;

        Vehicle* vehicle = nullptr;

        switch (choice) {
            case 1:
                vehicle = new Car(parkingLot.getCount() + 1);
                break;
            case 2:
                vehicle = new Bus(parkingLot.getCount() + 1);
                break;
            case 3:
                vehicle = new Motorbike(parkingLot.getCount() + 1);
                break;
            default:
                std::cout << "Invalid choice" << std::endl;
                continue;
        }

        parkingLot.parkVehicle(vehicle);
        std::cout << "Vehicle ID " << vehicle->getID() << " parked." << std::endl;
    }

    // Unpark a vehicle
    int idToUnpark;
    std::cout << "Enter the ID of the vehicle to unpark: ";
    std::cin >> idToUnpark;
    parkingLot.unparkVehicle(idToUnpark);

    return 0;
}