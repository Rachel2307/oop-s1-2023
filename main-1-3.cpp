#include <iostream>
#include "ParkingLot.h"
#include "Vehicle.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"

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

    int maxParkingDuration = 15; // Maximum allowed parking duration in seconds
    //int overstayingCount = parkingLot.countOverstayingVehicles(maxParkingDuration);

    //std::cout << "Number of vehicles overstaying for more than " << maxParkingDuration << " seconds: "
             // << overstayingCount << std::endl;

    return 0;
}
