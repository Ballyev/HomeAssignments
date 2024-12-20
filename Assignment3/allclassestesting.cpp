#include <gtest/gtest.h>
#include "Transformers.h"
#include "Autobots.h"
#include "MiniRobots.h"
#include "Desepticons.h"

// Тесты для класса Transformers
TEST(TransformersTest, SetGetWeapon) {
    Engine engine; // Предполагается, что Engine имеет конструктор по умолчанию
    Transformers transformer(100, 50, "Laser", 75, engine);
    
    transformer.setWeapon("Plasma");
    EXPECT_EQ(transformer.getWeapon(), "Plasma");
}

TEST(TransformersTest, SetGetHealth) {
    Engine engine;
    Transformers transformer(100, 50, "Laser", 75, engine);
    
    transformer.setHealth(90);
    EXPECT_EQ(transformer.getHealth(), 90);
}

TEST(TransformersTest, SetGetArmor) {
    Engine engine;
    Transformers transformer(100, 50, "Laser", 75, engine);
    
    transformer.setArmor(60);
    EXPECT_EQ(transformer.getArmor(), 60);
}

TEST(TransformersTest, SetGetPower) {
    Engine engine;
    Transformers transformer(100, 50, "Laser", 75, engine);
    
    transformer.setPower(80);
    EXPECT_EQ(transformer.getPower(), 80);
}

TEST(TransformersTest, SetGetAlly) {
    Engine engine;
    Transformers ally(100, 50, "Laser", 75, engine);
    Transformers transformer(100, 50, "Laser", 75, engine);
    
    transformer.setAlly(&ally);
    EXPECT_EQ(transformer.getAlly(), &ally);
}

// Тесты для класса Autobots
TEST(AutobotsTest, SetGetWeaponType) {
    Engine engine;
    Autobots autobot(100, 50, "Laser", 75, engine);
    
    autobot.setWeaponType("Rifle");
    EXPECT_EQ(autobot.getWeaponType(), "Rifle");
}

TEST(AutobotsTest, SetGetSkillLevel) {
    Engine engine;
    Autobots autobot(100, 50, "Laser", 75, engine);
    
    autobot.setSkillLevel(5);
    EXPECT_EQ(autobot.getSkillLevel(), 5);
}

TEST(AutobotsTest, SetGetSizeOfInventory) {
    Engine engine;
    Autobots autobot(100, 50, "Laser", 75, engine);
    
    autobot.setSizeOfInventory(20);
    EXPECT_EQ(autobot.getSizeOfInventory(), 20);
}

// Тесты для класса MiniRobots
TEST(MiniRobotsTest, SetGetHeight) {
    Engine engine;
    MiniRobots miniRobot(100, 50, "Laser", 75, engine);
    
    miniRobot.setHeight(30);
    EXPECT_EQ(miniRobot.getHeight(), 30);
}

TEST(MiniRobotsTest, SetGetAttackZone) {
    Engine engine;
    MiniRobots miniRobot(100, 50, "Laser", 75, engine);
    
    miniRobot.setAttackZone(25);
    EXPECT_EQ(miniRobot.getAttackZone(), 25);
}

TEST(MiniRobotsTest, SetGetSize) {
    Engine engine;
    MiniRobots miniRobot(100, 50, "Laser", 75, engine);
    
    miniRobot.setSize("Small");
    EXPECT_EQ(miniRobot.getSize(), "Small");
}


TEST(DecepticonsTest, SetGetDangerLevel) {
    Engine engine;
    Desepticons decepticon(100, 50, "Laser", 75, engine);

    decepticon.setDangerLevel(80);
    EXPECT_EQ(decepticon.getDangerLevel(), 80);
}

TEST(DecepticonsTest, SetGetNumberOfModel) {
    Engine engine;
    Desepticons decepticon(100, 50,"Laser",75 ,engine);

    decepticon.setNumberOfModel(12);
    EXPECT_EQ(decepticon.getNumberOfModel(),12 );
}

TEST(DecepticonsTest, SetGetPercentOfRecharge) {
   Engine engine;
   Desepticons decepticon (100 ,50 ,"Laser" ,75 ,engine);

   decepticon.setPercentOfRecharge (40 );
   EXPECT_EQ(decepticon.getPercentOfRecharge (),40 );
}
