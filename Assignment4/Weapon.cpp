//Баллыев Эзиз 83-группа Implementation of Transformer classes
#include "Weapon.h"
#include <iostream>

Weapon::Weapon(const std::string &type) : type(type) {}

void Weapon::use() const {
    std::cout << "Using weapon: " << type << std::endl;
}