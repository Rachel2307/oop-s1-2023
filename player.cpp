#include <iostream>
#include "player.h"

Player::Player(std::string name, int health, int damage) {
    this->name = name;
    this->health = health;
    this->damage = damage;
}

void Player::attack(Player* opponent) {
    std::cout << name << " attacks " << opponent->getName() << " for " << damage << " damage." << std::endl;
    opponent->takeDamage(damage);
}

void Player::takeDamage(int damage) {
    health -= damage;
    std::cout << name << " takes " << damage << " damage. Remaining health: " << health << std::endl;
}

std::string Player::getName() {
    return name;
}

int Player::getHealth() {
    return health;
}

int Player::getDamage() {
    return damage;
}

void Player::setHealth(int health) {
    this->health = health;
}