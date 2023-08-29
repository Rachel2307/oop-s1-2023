#include "warrior.h"
#include <iostream>
// Constructor
Warrior::Warrior(std::string name, int health, int damage, std::string weapon)
    : Player(name, health, damage), weapon(weapon) {}

// Deals damage to opponent based on weapon's damage points
void Warrior::swingWeapon(Player* opponent) {
    int damage = getDamage(); // Get damage of the Warrior
    opponent->takeDamage(damage); // Call takeDamage() of the opponent
    std::cout << getName() << " swings their " << weapon << " at " << opponent->getName() << "!" << std::endl;
}

// Getter and Setter for weapon
std::string Warrior::getWeapon() const {
    return weapon;
}

void Warrior::setWeapon(std::string weapon) {
    this->weapon = weapon;
}