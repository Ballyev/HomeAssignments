//Ballyyev Eziz st135568@student.spbu.ru Class Transformers
#ifndef WEAPON_H
#define WEAPON_H

#include <string>

class Weapon {
    public:
        Weapon(std::string name);
        void strike();
        std::string getName();

    private:
        std::string _name;
        int _load;
};

#endif