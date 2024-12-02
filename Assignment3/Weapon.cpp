//Ballyyev Eziz st135568@student.spbu.ru Class Transformers
#include "Weapon.h"

#include <iostream>

Weapon::Weapon(std::string name) : _name(name), _load(100) {
}

void Weapon::strike() {
    if (_load <= 0) {
        std::cerr << "No more load\n";
        return;
    }
    _load--;
}

std::string Weapon::getName() {
    return _name;
}