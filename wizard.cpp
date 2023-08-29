#include "wizard.h"
#include <iostream>

Wizard::Wizard(std::string name, int health, int damage, int mana)
    : Player(name, health, damage), mana(mana) {
}

void Wizard::castSpell(Player* opponent) {
    std::cout << getName() << " casts a spell on " << opponent->getName() << " for " << mana << " damage." << std::endl;
    opponent->takeDamage(mana);
}

int Wizard::getMana() {
    return mana;
}

void Wizard::setMana(int mana) {
    this->mana = mana;
}