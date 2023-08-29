#ifndef PLAYER_H
#define PLAYER_H
#include <string>
using namespace std;
class Player {
private:
    string name;
    int health;
    int damage;

public:
    Player(string name, int health, int damage);
    void attack(Player* opponent);
    void takeDamage(int damage);
    // Getters and Setters
    std::string getName();
    int getHealth();
    int getDamage();
    void setHealth(int health);
};

#endif // PLAYER_H