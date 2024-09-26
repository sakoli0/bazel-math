#include "gtest/gtest.h"
#include "src/main/cpp/math_operations.h"

TEST(MathOperationsTest, AdditionWorks) {
    EXPECT_EQ(bazelmath::add(2, 3), 5);
}

TEST(MathOperationsTest, SubtractionWorks) {
    EXPECT_EQ(bazelmath::subtract(5, 3), 2);
}
