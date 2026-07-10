#include <gtest/gtest.h>

#include <vector>

#include "math_problems.h"

using namespace MathProblems;

TEST(ArmstrongTest, HandlesSmallLimit) {
  auto nums = armstrongNumbers(10);
  std::vector<int> expected = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  EXPECT_EQ(nums, expected);
}

TEST(ArmstrongTest, HandlesLimit200) {
  auto nums = armstrongNumbers(200);
  std::vector<int> expected = {1, 2, 3, 4, 5, 6, 7, 8, 9, 153};
  EXPECT_EQ(nums, expected);
}

TEST(ArmstrongTest, HandlesLimit1000) {
  auto nums = armstrongNumbers(1000);
  std::vector<int> expected = {1, 2, 3, 4, 5, 6, 7, 8, 9, 153, 370, 371, 407};
  EXPECT_EQ(nums, expected);
}

TEST(ArmstrongTest, HandlesLimit10000) {
  auto nums = armstrongNumbers(10000);
  std::vector<int> expected = {1, 2, 3, 4, 5, 6, 7, 8, 9, 153, 370, 371, 407, 1634, 8208, 9474};
  EXPECT_EQ(nums, expected);
}

TEST(ArmstrongTest, HandlesZeroAndNegative) {
  EXPECT_TRUE(armstrongNumbers(0).empty());
  EXPECT_TRUE(armstrongNumbers(-5).empty());
}