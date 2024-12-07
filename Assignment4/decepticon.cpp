//Баллыев Эзиз 83-группа Implementation of Transformer classes
#include "decepticon.h"
#include <iostream>

bool Decepticon::sabotage() {
    std::cout << name << " is sabotaging!" << std::endl;
    return true;
}

void Decepticon::transform() {
    std::cout << name << " is transforming!" << std::endl;
}

void Decepticon::useWeapon() const {
    weapon.use();
}