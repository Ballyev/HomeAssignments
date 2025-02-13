#ifndef CLASS_AUTOBOTS_H
#define CLASS_AUTOBOTS_H

#include <string>
#include "Transformers.h"

class Autobots : public Transformers {
public:
    Autobots(const unsigned int health, const unsigned int armor,
             const std::string &weapon,const uint power, Engine engine);
    ~Autobots() = default;
    
    bool transform();

    void setWeaponType(const std::string& weaponType);
    std::string getWeaponType() const;
    
    void setSkillLevel(uint skillLevel);
    uint getSkillLevel() const;

    void setSizeOfInventory(uint sizeOfInventory);
    uint getSizeOfInventory() const;

    bool protect();
private:
    std::string _weaponType;
    uint _skillLevel;
    uint _sizeOfInventory;
};

#endif