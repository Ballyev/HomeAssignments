//Баллыев Эзиз 83-группа Implementation of Transformer classes
#include "autobot.h"
#include <iostream>

bool Autobot::assist() {
    std::cout << name << " is assisting!" << std::endl;
    return true;
}

void Autobot::transform() {
    std::cout << name << " is transforming!" << std::endl;
}

void Autobot::useWeapon() const {
    weapon.use();
}