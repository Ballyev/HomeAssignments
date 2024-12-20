#include <gtest/gtest.h>
#include "Transformers.h"
#include "Autobots.h"
#include "MiniRobots.h"
#include "Desepticons.h"
#include "weapon.h"
#include "engine.h"


TEST(WeaponTest, SetGetWeapon) {
    Weapon weapon("Laser");
    EXPECT_EQ(weapon.getWeapon(), "Laser");

    weapon.SetWeapon("Plasma");
    EXPECT_EQ(weapon.getWeapon(), "Plasma");
}


TEST(EngineTest, SetGetType) {
    Engine engine("V8", 300);
    EXPECT_EQ(engine.getType(), "V8");

    engine.setType("Electric");
    EXPECT_EQ(engine.getType(), "Electric");
}

TEST(EngineTest, SetGetHorsepower) {
    Engine engine("V8", 300);
    EXPECT_EQ(engine.getHorsepower(), 300);

    engine.setHorsepower(400);
    EXPECT_EQ(engine.getHorsepower(), 400);
}


TEST(TransformersTest, SetGetWeapon) {
    Engine engine; 
    Weapon weapon("Laser");
    Transformers transformer(100, 50, weapon.getWeapon(), 75, engine);
    
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

TEST(DesepticonsTest, SetGetDangerLevel) {
    Engine engine;
    Desepticons desepticon(100, 50,"Laser",75 ,engine);

   desepticon.setDangerLevel (80 );
   EXPECT_EQ(desepticon.getDangerLevel (),80 );
}

TEST(DesepticonsTest, SetGetNumberOfModel) {
   Engine engine;
   Desepticons desepticon (100 ,50 ,"Laser" ,75 ,engine);

   desepticon.setNumberOfModel (12 );
   EXPECT_EQ(desepticon.getNumberOfModel (),12 );
}

TEST(DesepticonsTest, SetGetPercentOfRecharge) {
   Engine engine;
   Desepticons desepticon (100 ,50 ,"Laser" ,75 ,engine);

   desepticon.setPercentOfRecharge (40 );
   EXPECT_EQ(desepticon.getPercentOfRecharge (),40 );
}