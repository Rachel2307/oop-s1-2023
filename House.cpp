#include "House.h"

House::House() : appliances(0), numAppliances(0) {
    // Default constructor creates an empty House
}

House::House(int numAppliances) : numAppliances(numAppliances) {
    appliances = new Appliance*[numAppliances]; // Allocate memory for appliances
    for (int i = 0; i < numAppliances; ++i) {
        appliances[i] = 0; // Initialize each appliance pointer to nullptr
    }
}

House::~House() {
    for (int i = 0; i < numAppliances; ++i) {
        delete appliances[i]; // Deallocate each appliance
    }
    delete[] appliances; // Deallocate the array of appliance pointers
}

bool House::addAppliance(Appliance* appliance) {
    for (int i = 0; i < numAppliances; ++i) {
        if (appliances[i] == 0) { // Find the first empty slot
            appliances[i] = appliance;
            return true;
        }
    }
    return false; // No empty slot available
}

double House::getTotalPowerConsumption() const {
    double totalPower = 0.0;
    for (int i = 0; i < numAppliances; ++i) {
        if (appliances[i] != 0) {
            //calculate and accumulate the total power consumption of appliances in a house.
            totalPower += appliances[i]->getPowerConsumption(); // Sum power consumption of all appliances
        }
    }
    return totalPower;
}
