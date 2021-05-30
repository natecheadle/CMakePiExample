#include "gtest/gtest.h"
#include "../TestClass.hpp"

TEST(Example_Test, TestAdd)
{
    ASSERT_EQ(4, Math::Add(2, 2));
    ASSERT_DOUBLE_EQ(4.0, Math::Add(2.0, 2.0));
}

TEST(Example_Test, TestMultiply)
{
    ASSERT_EQ(4, Math::Multiply(2, 2));
    ASSERT_DOUBLE_EQ(4.0, Math::Multiply(2.0, 2.0));
}

TEST(Example_Test, TestDivide)
{
    ASSERT_EQ(1, Math::Divide(2, 2));
    ASSERT_DOUBLE_EQ(1.0, Math::Divide(2.0, 2.0));
}

TEST(Example_Test, TestSubtract)
{
    ASSERT_EQ(0, Math::Subtract(2, 2));
    ASSERT_DOUBLE_EQ(0.0, Math::Subtract(2.0, 2.0));
}