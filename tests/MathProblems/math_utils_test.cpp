#include "math_utils.h"

#include <gtest/gtest.h>

using namespace MathProblems;

TEST(SumOfProperDivisorsTest, HandlesSmallNumbers) {
  EXPECT_EQ(sumOfProperDivisors(1), 0);
  EXPECT_EQ(sumOfProperDivisors(2), 1);
  EXPECT_EQ(sumOfProperDivisors(3), 1);
  EXPECT_EQ(sumOfProperDivisors(4), 3);
  EXPECT_EQ(sumOfProperDivisors(6), 6);
  EXPECT_EQ(sumOfProperDivisors(10), 8);
  EXPECT_EQ(sumOfProperDivisors(12), 16);
}

TEST(SumOfProperDivisorsTest, HandlesPerfectNumber) {
  EXPECT_EQ(sumOfProperDivisors(28), 28);
}