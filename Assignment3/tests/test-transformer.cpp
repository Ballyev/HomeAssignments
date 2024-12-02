#include "Transformer.h"
#include "gtest/gtest.h"

TEST(Transformer, can_be_initialized_with_config) {
    Weapon weapon("Bubble weapon");
    TransformerConfig config = {"Car", 10};
    Transformer transformer(config);
    ASSERT_EQ(transformer.getAgeInYears(), 10);
    ASSERT_EQ(transformer.getTransformationResult(), "Car");
    ASSERT_EQ(transformer.getHealth(), 100);
}

TEST(Transformer, can_switch_guns) {
    Weapon weapon1("Weapon 1");
    Weapon weapon2("Weapon 2");
    TransformerConfig config = {"Car", 10};
    Transformer transformer(config);
    transformer.setWeapon(&weapon1);
    ASSERT_EQ(transformer.getCurrentWeapon()->getName(), "Weapon 1");
    transformer.setWeapon(&weapon2);
    ASSERT_EQ(transformer.getCurrentWeapon()->getName(), "Weapon 2");
}

TEST(Transformer, can_increase_age) {
    TransformerConfig config = {"Car", 10};
    Transformer transformer(config);
    transformer.increaseAge();
    ASSERT_EQ(transformer.getAgeInYears(), 11);
}

TEST(Transformer, can_fire) {
    Weapon weapon("Weapon 1");
    TransformerConfig config = {"Car", 10};
    Transformer transformer(config);
    transformer.setWeapon(&weapon);
    transformer.fire();
    ASSERT_EQ(transformer.getHealth(), 99);
}

TEST(Transformer, can_transform) {
    TransformerConfig config = {"Car", 10};
    Transformer transformer(config);
    transformer.transform();
}