#include <gtest/gtest.h>

#include "math_problems.h"

using namespace MathProblems;

TEST(GcdTest, HandlesPositiveNumbers) {
  EXPECT_EQ(gcd(10, 5), 5);
  EXPECT_EQ(gcd(54, 24), 6);
  EXPECT_EQ(gcd(17, 19), 1);  // взаимно простые
  EXPECT_EQ(gcd(48, 18), 6);
  EXPECT_EQ(gcd(100, 25), 25);
}

TEST(GcdTest, HandlesZero) {
  EXPECT_EQ(gcd(0, 5), 5);
  EXPECT_EQ(gcd(5, 0), 5);
  EXPECT_EQ(gcd(0, 0), 0);
  EXPECT_EQ(gcd(0, -7), 7);
}

TEST(GcdTest, HandlesNegativeNumbers) {
  EXPECT_EQ(gcd(-10, 5), 5);
  EXPECT_EQ(gcd(10, -5), 5);
  EXPECT_EQ(gcd(-10, -5), 5);
  EXPECT_EQ(gcd(-17, -19), 1);
  EXPECT_EQ(gcd(-48, 18), 6);
}

TEST(GcdTest, HandlesLargeNumbers) {
  EXPECT_EQ(gcd(123456, 789012), 12);
  EXPECT_EQ(gcd(1000000, 999999), 1);
  EXPECT_EQ(gcd(987654321, 123456789), 9);
}

TEST(GcdTest, HandlesEqualNumbers) {
  EXPECT_EQ(gcd(7, 7), 7);
  EXPECT_EQ(gcd(100, 100), 100);
  EXPECT_EQ(gcd(1, 1), 1);
}

TEST(GcdTest, HandlesOne) {
  EXPECT_EQ(gcd(1, 1), 1);
  EXPECT_EQ(gcd(1, 100), 1);
  EXPECT_EQ(gcd(100, 1), 1);
  EXPECT_EQ(gcd(1, 0), 1);
}