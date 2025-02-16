/*Assignment6 Баллыев Эзиз st135568@gmail.com create a template class with specializations and test them*/
#include <gtest/gtest.h>
#include "TemplateClass.h"
#include "Class1.h"
#include "Class2.h"
#include "Class3.h"

TEST(Class1Test, ReturnsTrueForPositiveNumber) {
    TemplateClass<Class1> checker(5, {});
    EXPECT_TRUE(checker.foo());
}

TEST(Class1Test, ReturnsFalseForNegativeNumber) {
    TemplateClass<Class1> checker(-5, {});
    EXPECT_FALSE(checker.foo());
}

TEST(Class3Test, ReturnsTrueWhenNumberIsNegativeSize) {
    TemplateClass<Class3> checker(-2, {1.0f, 2.0f});
    EXPECT_TRUE(checker.foo());
}

TEST(Class3Test, ReturnsFalseWhenNumberIsNotNegativeSize) {
    TemplateClass<Class3> checker(-2, {1.0f});
    EXPECT_FALSE(checker.foo());
}

TEST(Class2Test, ReturnsTrueForNonEmptyVector) {
    TemplateClass<Class2> checker(-2, {1.0f});
    EXPECT_TRUE(checker.foo());
}

TEST(Class2Test, ReturnsFalseForEmptyVector) {
    TemplateClass<Class2> checker(-1, {});
    EXPECT_FALSE(checker.foo());
}

TEST(TemplateClassTest, IntSpecializationAlwaysTrue) {
    TemplateClass<int> int_test(42, {1.0f});
    EXPECT_TRUE(int_test.foo());
}

TEST(TemplateClassTest, DoubleSpecializationAlwaysFalse) {
    TemplateClass<double> double_test(42, {1.0f, 2.0f, 3.0f});
    EXPECT_FALSE(double_test.foo());
};