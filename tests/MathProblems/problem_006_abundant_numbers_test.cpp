#include <gtest/gtest.h>

#include <vector>

#include "math_problems.h"

using namespace MathProblems;

TEST(AbundantNumbersTest, HandlesSmallLimit) {
  EXPECT_EQ(abundantNumbers(12), std::vector<int>({}));
  EXPECT_EQ(abundantNumbers(13), std::vector<int>({12}));
  EXPECT_EQ(abundantNumbers(19), std::vector<int>({12, 18}));
}

TEST(AbundantNumbersTest, HandlesLimit30) {
  std::vector<int> expected = {12, 18, 20, 24};
  EXPECT_EQ(abundantNumbers(30), expected);
}

TEST(AbundantNumbersTest, HandlesLimit50) {
  std::vector<int> expected = {12, 18, 20, 24, 30, 36, 40, 42, 48};
  EXPECT_EQ(abundantNumbers(50), expected);
}

TEST(AbundantNumbersTest, HandlesZeroAndNegative) {
  EXPECT_TRUE(abundantNumbers(0).empty());
  EXPECT_TRUE(abundantNumbers(-5).empty());
}