#ifndef TRANSFORMER_H
#define TRANSFORMER_H

#include <iostream>
#include <string>

#include "TransformerMemory.h"
#include "Weapon.h"

struct TransformerConfig {
        const std::string transformationResult;
        const int ageInYears;
        const int woundLevel = 0;
};

class Transformer {
    public:
        Transformer(TransformerConfig config);
        void transform();
        void fire();
        void increaseAge();

        std::string getTransformationResult() const;
        int getAgeInYears() const;
        int getHealth() const;
        Weapon* getCurrentWeapon() const;

        void setHealth(int newHealthValue);
        void setWeapon(Weapon* weapon);

        ~Transformer();

    private:
        int _health;
        std::string _transformationResult;
        int _ageInYears;
        TransformerMemory* _memory;
        Weapon* _weapon = nullptr;
        static const int TRANSFORMATION_HEALTH_LIMIT = 10;

    protected:
        TransformerMemory* accessMemory();
};
#endif