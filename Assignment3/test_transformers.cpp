//Ballyyev Eziz ballyev.006@gmail.com
//Transformer Class Inheritance
#include<gtest/gtest.h>
#include"transformer.h"
#include"autobot.h"
#include"decepticon.h"
#include"maximal.h"

TEST(TramsformerTest, MoveTest) {
    Transformer transformer;
    EXPECT_TRUE(transformer.move());
}

TEST(AutobotTEST, FireTEST) {
    Autobot autobot;
    EXPECT_TRUE(autobot.fire());
}

TEST(DecepticonTest, SabotageTest) {
    Decepticon decepticon;
    EXPECT_TRUE(decepticon.sabotage());
}

TEST(MaximalTest, ShieldTest) {
    Maximal maximal;
    EXPECT_TRUE(maximal.shield());
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}