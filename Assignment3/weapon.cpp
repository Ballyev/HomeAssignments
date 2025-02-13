#include "weapon.h"
#include <iostream>

Weapon::Weapon(const std::string &name): _name(name){}


void Weapon::SetWeapon(const std::string &name){
    _name = name;
}

std::string Weapon::getWeapon(){
    return _name;
}


