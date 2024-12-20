#ifndef ENGINE_H
#define ENGINE_H
#include <iostream>

class Engine {
    std::string _type;
    unsigned int _horsepower;

public:
    Engine(std::string t = "Standard", unsigned int horsepower = 100);
    std::string getType() const;
    void setType(const std::string& type);
    unsigned int getHorsepower() const;
    void setHorsepower(unsigned int horsepower);
};


#endif