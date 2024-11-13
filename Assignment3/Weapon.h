//Ballyyev Eziz ballyev.006@gmail.com
//Transformer Class Inheritance
#ifndef WEAPON_H
#define WEAPON_H

#include <string>

class Weapon {
public:
    Weapon(const std::string &type);
    void use() const;

private:
    std::string type;
};

#endif
