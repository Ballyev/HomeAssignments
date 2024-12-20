#include "MiniRobots.h"

MiniRobots::MiniRobots(const unsigned int health,const  unsigned int armor, const std::string &weapon, const uint power, Engine engine)
    : Transformers(health,armor,weapon,power,engine), _size("5"), _height(40), _attackZone(15) {}

void MiniRobots::setSize(const std::string& size) {
    _size = size;
}
std::string MiniRobots::getSize() const {
    return _size;
}

void MiniRobots::setHeight(uint height) {
    _height = height;
}
uint MiniRobots::getHeight() const {
    return _height;
}

void MiniRobots::setAttackZone(uint attackZone) {
    _attackZone = attackZone;
}
uint MiniRobots::getAttackZone() const {
    return _attackZone;
}

bool MiniRobots::protect() {
    return _armor > 30;
}