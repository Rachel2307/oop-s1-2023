#include "Fridge.h"
#include "Appliance.h"

Fridge::Fridge(): Appliance(), volume(0.0) {
// the default constructor set power rating to 0.0 and volume to 0
}
Fridge::Fridge(int powerRating, double volume): Appliance(powerRating), volume(volume) {
// The constructor sets power rating and volume based on provided arguments
}
        
// set volume based on provided arguments
void Fridge::setVolume(double volume) {
    this->volume = volume;
}
// return volume
double Fridge::getVolume() const {
    return volume;
}

double Fridge::getPowerConsumption() const {
    return get_powerRating()*24*(volume/100.0);
}