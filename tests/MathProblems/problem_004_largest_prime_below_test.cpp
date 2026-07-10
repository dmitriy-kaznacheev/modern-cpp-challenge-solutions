#include <gtest/gtest.h>

#include "math_problems.h"

using namespace MathProblems;

TEST(LargestPrimeBelowTest, HandlesSmallValues) {
  EXPECT_EQ(largestPrimeBelow(2), 0);
  EXPECT_EQ(largestPrimeBelow(3), 2);
  EXPECT_EQ(largestPrimeBelow(4), 3);
  EXPECT_EQ(largestPrimeBelow(5), 3);
  EXPECT_EQ(largestPrimeBelow(6), 5);
  EXPECT_EQ(largestPrimeBelow(10), 7);
}

TEST(LargestPrimeBelowTest, HandlesTypicalValues) {
  EXPECT_EQ(largestPrimeBelow(20), 19);
  EXPECT_EQ(largestPrimeBelow(50), 47);
  EXPECT_EQ(largestPrimeBelow(100), 97);
  EXPECT_EQ(largestPrimeBelow(200), 199);
}

TEST(LargestPrimeBelowTest, HandlesZeroAndNegative) {
  EXPECT_EQ(largestPrimeBelow(0), 0);
  EXPECT_EQ(largestPrimeBelow(-5), 0);
}

TEST(LargestPrimeBelowTest, HandlesPrimeInput) {
  EXPECT_EQ(largestPrimeBelow(7), 5);
  EXPECT_EQ(largestPrimeBelow(11), 7);
  EXPECT_EQ(largestPrimeBelow(13), 11);
}