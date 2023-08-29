#ifndef WARRIOR_H
#define WARRIOR_H

#include "player.h"

class Warrior : public Player {
private:
    std::string weapon; // Weapon of the Warrior

public:
    // Constructor
    Warrior(std::string name, int health, int damage, std::string weapon);

    // Member function
    void swingWeapon(Player* opponent); // Deals damage to opponent based on weapon's damage points

    // Getter and Setter for weapon
    std::string getWeapon() const;
    void setWeapon(std::string weapon);
};

#endif // WARRIOR_H