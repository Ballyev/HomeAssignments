#ifndef CLASS_MINIROBOTS_H
#define CLASS_MINIROBOTS_H

#include <string>
#include "Transformers.h"

class MiniRobots : public Transformers {
public:
    MiniRobots(const unsigned int health, const unsigned int armor,
             const std::string &weapon,const uint power, Engine engine);
    bool transform();

    void setHeight(uint height);
    uint getHeight() const;

    void setAttackZone(uint attackZone);
    uint getAttackZone() const;

    void setSize(const std::string& size);
    std::string getSize() const;

    bool protect();
private:
    std::string _size;
    uint _height;
    uint _attackZone;
};

#endif