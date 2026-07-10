#include <gtest/gtest.h>

#include "math_problems.h"

using namespace MathProblems;

TEST(LcmTest, HandlesPositiveNumbers) {
  EXPECT_EQ(lcm(4, 6), 12);
  EXPECT_EQ(lcm(3, 5), 15);
  EXPECT_EQ(lcm(12, 18), 36);
  EXPECT_EQ(lcm(1, 100), 100);
}

TEST(LcmTest, HandlesZero) {
  EXPECT_EQ(lcm(0, 5), 0);
  EXPECT_EQ(lcm(5, 0), 0);
  EXPECT_EQ(lcm(0, 0), 0);
}

TEST(LcmTest, HandlesNegativeNumbers) {
  EXPECT_EQ(lcm(-4, 6), 12);
  EXPECT_EQ(lcm(4, -6), 12);
  EXPECT_EQ(lcm(-4, -6), 12);
  EXPECT_EQ(lcm(-1, 100), 100);
}

TEST(LcmTest, HandlesLargeNumbers) {
  EXPECT_EQ(lcm(1000000, 999999), 999999000000ULL);
  EXPECT_EQ(lcm(123456, 789012), 8117355456ULL);
}

TEST(LcmTest, HandlesEqualNumbers) {
  EXPECT_EQ(lcm(7, 7), 7);
  EXPECT_EQ(lcm(100, 100), 100);
}