#include "Transformer.h"

Transformer::Transformer(TransformerConfig config) {
    _health = 100 - config.woundLevel;
    _transformationResult = config.transformationResult;
    _ageInYears = config.ageInYears;
    _memory = new TransformerMemory(100);
}

void Transformer::transform() {
    if (this->getHealth() < TRANSFORMATION_HEALTH_LIMIT) {
        std::cerr << "Unable to transform. Health is too low\n"
                  << "It should be above " << TRANSFORMATION_HEALTH_LIMIT
                  << "\n";
        return;
    }
    std::cout << "Transforming into: " << _transformationResult << "\n";
    _memory->logAction("Transformed");
}

void Transformer::fire() {
    if (!_weapon) {
        std::cerr << "No weapon to shoot\n";
        return;
    }
    _weapon->strike();
    _health--;
    _memory->logAction("Stroke");
}

void Transformer::increaseAge() {
    _ageInYears++;
    _memory->logAction("Birthday!");
}

std::string Transformer::getTransformationResult() const {
    return _transformationResult;
}

int Transformer::getAgeInYears() const {
    return _ageInYears;
}

int Transformer::getHealth() const {
    return _health;
}

Gun* Transformer::getCurrentWeapon() const {
    return _weapon;
}

void Transformer::setHealth(int newHealthValue) {
    _health = newHealthValue;
}

void Transformer::setWeapon(Weapon* weapon) {
    _weapon = weapon;
}

Transformer::~Transformer() {
    delete _memory;
}

TransformerMemory* Transformer::accessMemory() {
    return _memory;
}