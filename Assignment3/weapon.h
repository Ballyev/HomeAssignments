#ifndef WEAPON_H
#define WEAPON_H

class Weapon {
    public:
    Weapon(const std::string &);
    ~Weapon() = default;

    void SetWeapon(const std::string &);
    std::string getWeapon();

    private:
    std::string _name;

}

#endif