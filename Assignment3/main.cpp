#include<iostream>
#include"Autobot.h"
#include"Decepticon.h"
#include"Maximal.h"

int main() {
    Autobot autobot;
    autobot.move();
    autobot.assist();

    std::cout << "----------\n";

    Decepticon decepticon;
    decepticon.move();
    decepticon.sabotage();

    std::cout << "----------\n";

    Maximal maximal;
    maximal move();
    maximal.shield();

    return 0;
}