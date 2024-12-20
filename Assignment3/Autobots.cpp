#include "Autobots.h"

Autobots::Autobots(const unsigned int health, const unsigned int armor,
             const std::string &weapon,const uint power, Engine engine) : Transformers(health,armor,weapon,power,engine),
             _skillLevel(1),_sizeOfInventory(10) {}

void Autobots::setWeaponType(const std::string& weaponType) {
    _weaponType = weaponType;
}
std::string Autobots::getWeaponType() const {
    return _weaponType;
}

void Autobots::setSkillLevel(uint skillLevel) {
    _skillLevel = skillLevel;
}
uint Autobots::getSkillLevel() const {
    return _skillLevel;
}

void Autobots::setSizeOfInventory(uint sizeOfInventory) {
    _sizeOfInventory = sizeOfInventory;
}
uint Autobots::getSizeOfInventory() const {
    return _sizeOfInventory;
}

bool Autobots::protect() {
    return _power > 50; 
}