//Ballyyev Eziz ballyev.006@gmail.com
//Transformer Class Inheritance
#include "decepticon.h"
#include<iostream>

Decepticon::Decepticon() {
    std::cout << "Decepticon created\n";
}

Decepticon::~Decepticon() {
    std::cout << "Decepticon destroyed\n";
}

bool Decepticon::sabotage() {
    std::cout << "Decepticon sabotage\n";
    return true;
}