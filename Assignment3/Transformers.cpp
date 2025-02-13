#include "Transformers.h"
#include <iostream>


Transformers::Transformers(const unsigned int health, const unsigned int armor,
                        const std::string &weapon,const unsigned int power, Engine engine)
    : _health(health), _armor(armor), _weapon(weapon), _power(power), _engine(engine) {}

Transformers::Transformers(const unsigned int health, const unsigned int armor,
                        const std::string &weapon,const unsigned int power)
    : _health(health), _armor(armor), _weapon(weapon), _power(power){}

    

bool Transformers::motion() { 
    return true; 
    }
bool Transformers::jump() { 
    return true; 
    }
bool Transformers::attack() { 
    return true; 
    }

void Transformers::setWeapon(const std::string &weapon) { 
    _weapon = weapon; 
    }
std::string Transformers::getWeapon() const {  
    return _weapon; 
    }

void Transformers::setHealth(unsigned int health) { 
    _health = health; 
    }
unsigned int Transformers::getHealth() const { 
    return _health; 
    }

void Transformers::setArmor(unsigned int armor) { 
    _armor = armor; 
    }
unsigned int Transformers::getArmor() const { 
    return _armor; 
    }

void Transformers::setPower(unsigned int power) { 
    _power = power; 
    }
unsigned int Transformers::getPower() const { 
    return _power; 
    }

void Transformers::setEngine(const Engine& engine) { 
    _engine = engine; 
    }
Engine Transformers::getEngine() const { 
    return _engine; 
    }

void Transformers::setAlly(Transformers* ally) { 
    _ally = ally; 
    }
Transformers* Transformers::getAlly() const { 
    return _ally; 
    }