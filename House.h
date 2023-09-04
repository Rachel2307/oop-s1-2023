#ifndef HOUSE_H
#define HOUSE_H

#include "Appliance.h"

class House {
private:
    Appliance** appliances;
    int numAppliances;
public:
    House();
    House(int numAppliances);
    ~House(); // Destructor to deallocate appliances

    bool addAppliance(Appliance* appliance);
    double getTotalPowerConsumption() const;

};

#endif  // HOUSE_H