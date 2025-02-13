#ifndef CLASS_TRANSFORMERS_H
#define CLASS_TRANSFORMERS_H

#include <iostream>
#include <string>
#include <memory>
#include "engine.h"


class Transformers {
public:
    Transformers(const unsigned int health, const unsigned int armor,
             const std::string &weapon,const uint power, Engine engine);

    Transformers(const unsigned int health, const unsigned int armor,
                        const std::string &weapon,const unsigned int power);


    ~Transformers() = default;

    bool motion();
    bool jump();
    bool attack();

    void setWeapon(const std::string &weapon);
    std::string getWeapon() const;

    void setHealth(unsigned int health);
    unsigned int getHealth() const;

    void setArmor(unsigned int armor);
    unsigned int getArmor() const;

    void setPower(unsigned int power);
    unsigned int getPower() const;

    void setEngine(const Engine& engine);
    Engine getEngine() const;

    void setAlly(Transformers* ally);
    Transformers* getAlly() const;

protected:
    unsigned int _health;
    unsigned int _armor;
    std::string _weapon;
    unsigned int _power;

    Engine _engine;
    Transformers* _ally = nullptr;
};

#endif