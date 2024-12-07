//Ballyyev Eziz st135568@student.spbu.ru Class Transformers
#include "Gun.h"

#include <iostream>

Gun::Gun(std::string name) : _name(name), _load(100) {
}

void Gun::strike() {
    if (_load <= 0) {
        std::cerr << "No more load\n";
        return;
    }
    _load--;
}

std::string Gun::getName() {
    return _name;
}