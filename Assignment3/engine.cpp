#include "engine.h"


Engine::Engine(std::string t, unsigned int horsepower) :
     _type(t), _horsepower(horsepower) {}


std::string Engine::getType() const { 
    return _type;
}


void Engine::setType(const std::string& t) { 
    _type = t;
     
}

unsigned int Engine::getHorsepower() const { 
    return _horsepower;
    
}
void Engine::setHorsepower(unsigned int horsepower) {

     _horsepower = horsepower;
}