
#include "Desepticons.h"


Desepticons::Desepticons(const unsigned int health, const unsigned int armor,
             const std::string &weapon,const uint power, Engine engine) : Transformers(health,armor,weapon,power,engine),
             _dangerLevel(10), _numberOfModel(10), _percentOfRecharge(0) {}

void Desepticons::setDangerLevel(uint dangerLevel) {
    _dangerLevel = dangerLevel;
}
uint Desepticons::getDangerLevel() const {
    return _dangerLevel;
}

void Desepticons::setNumberOfModel(uint numberOfModel) {
    _numberOfModel = numberOfModel;
}
uint Desepticons::getNumberOfModel() const {
    return _numberOfModel;
}

void Desepticons::setPercentOfRecharge(uint percentOfRecharge) {
    _percentOfRecharge = percentOfRecharge;
}
uint Desepticons::getPercentOfRecharge() const {
    return _percentOfRecharge;
}

bool Desepticons::protect() {
    return _health > 50; 
}
