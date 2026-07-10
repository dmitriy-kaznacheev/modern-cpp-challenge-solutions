#include <gtest/gtest.h>

#include <utility>
#include <vector>

#include "math_problems.h"

using namespace MathProblems;

TEST(AmicableTest, HandlesLimit300) {
  auto pairs = amicableNumbers(300);
  std::vector<std::pair<int, int>> expected = {{220, 284}};
  EXPECT_EQ(pairs, expected);
}

TEST(AmicableTest, HandlesLimit1200) {
  auto pairs = amicableNumbers(1200);
  std::vector<std::pair<int, int>> expected = {{220, 284}};
  EXPECT_EQ(pairs, expected);
}

TEST(AmicableTest, HandlesLimit1211) {
  auto pairs = amicableNumbers(1211);
  std::vector<std::pair<int, int>> expected = {{220, 284}, {1184, 1210}};
  EXPECT_EQ(pairs, expected);
}

TEST(AmicableTest, HandlesSmallLimit) {
  auto pairs = amicableNumbers(100);
  EXPECT_TRUE(pairs.empty());
}

TEST(AmicableTest, HandlesZeroAndNegative) {
  EXPECT_TRUE(amicableNumbers(0).empty());
  EXPECT_TRUE(amicableNumbers(-5).empty());
}