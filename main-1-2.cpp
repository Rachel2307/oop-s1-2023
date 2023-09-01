#include <iostream>
#include "parkinglot.h"
#include "car.h"
#include "bus.h"
#include "motorbike.h"

int main() {
    ParkingLot parkingLot(10);

    while (parkingLot.getCount() < 10) {
        int vehicleType;
        std::cout << "Enter the type of vehicle (1 for Car, 2 for Bus, 3 for Motorbike): ";
        std::cin >> vehicleType;

        int vehicleID;
        std::cout << "Enter the vehicle ID: ";
        std::cin >> vehicleID;

        Vehicle* newVehicle = nullptr;

        switch (vehicleType) {
            case 1:
                newVehicle = new Car(vehicleID);
                break;
            case 2:
                newVehicle = new Bus(vehicleID);
                break;
            case 3:
                newVehicle = new Motorbike(vehicleID);
                break;
            default:
                std::cout << "Invalid vehicle type." << std::endl;
                continue;
        }

        parkingLot.parkVehicle(newVehicle);
    }

    int unparkID;
    std::cout << "Enter the ID of the vehicle to unpark: ";
    std::cin >> unparkID;

    parkingLot.unparkVehicle(unparkID);

    return 0;
}