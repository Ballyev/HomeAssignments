//Ballyyev Eziz st135568@student.spbu.ru Class Transformers
#include "Weapon.h"
#include "gtest/gtest.h"

TEST(Weapon, have_a_name) {
    Weapon weapon("Bubble weapon");
    ASSERT_EQ(weapon.getName(), "Bubble weapon");
}

TEST(Weapon, can_strike) {
    Weapon* weapon = new Weapon("Fire arm");
    weapon->strike();
}

TEST(Weapon, can_strike_100_times) {
    Weapon* weapon = new Weapon("Fire arm");

    for (int i = 0; i < 100; i++) {
        weapon->strike();
    }
}