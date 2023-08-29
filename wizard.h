#ifndef WIZARD_H
#define WIZARD_H

#include "player.h"

class Wizard : public Player {
private:
    int mana;

public:
    Wizard(std::string name, int health, int damage, int mana);
    void castSpell(Player* opponent);
    
    // Getter and Setter
    int getMana();
    void setMana(int mana);
};

#endif // WIZARD_H