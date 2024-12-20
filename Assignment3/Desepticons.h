#ifndef CLASS_DECEPTICONS_H
#define CLASS_DECEPTICONS_H

#include "Transformers.h"
#include <string>

class Desepticons : public Transformers {
public:
    Desepticons(const unsigned int health, const unsigned int armor,
             const std::string &weapon,const uint power, Engine engine);
    bool transform();

    void setNumberOfModel(uint numberOfModel);
    uint getNumberOfModel() const;

    void setDangerLevel(uint dangerLevel);
    uint getDangerLevel() const;

    void setPercentOfRecharge(uint percentOfRecharge);
    uint getPercentOfRecharge() const;

    bool protect();
private:
    uint _dangerLevel;
    uint _numberOfModel;
    uint _percentOfRecharge;
};

#endif