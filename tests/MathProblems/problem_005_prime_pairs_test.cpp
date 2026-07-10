#include <gtest/gtest.h>

#include <utility>
#include <vector>

#include "math_problems.h"

using namespace MathProblems;

TEST(PrimePairsTest, HandlesSmallLimit) {
  auto pairs = primePairsDifferBy6(10);
  EXPECT_TRUE(pairs.empty());  // минимальная (5,11) требует limit > 11
}

TEST(PrimePairsTest, HandlesLimit15) {
  auto pairs = primePairsDifferBy6(15);
  std::vector<std::pair<int, int>> expected = {{5, 11}, {7, 13}};
  EXPECT_EQ(pairs, expected);
}

TEST(PrimePairsTest, HandlesLimit30) {
  auto pairs = primePairsDifferBy6(30);
  std::vector<std::pair<int, int>> expected = {{5, 11}, {7, 13}, {11, 17}, {13, 19}, {17, 23}, {23, 29}};
  EXPECT_EQ(pairs, expected);
}

TEST(PrimePairsTest, HandlesLimit100) {
  auto pairs = primePairsDifferBy6(100);
  // Проверим нескольких ключевых пар
  EXPECT_TRUE(std::find(pairs.begin(), pairs.end(), std::make_pair(31, 37)) != pairs.end());
  EXPECT_TRUE(std::find(pairs.begin(), pairs.end(), std::make_pair(47, 53)) != pairs.end());
  EXPECT_TRUE(std::find(pairs.begin(), pairs.end(), std::make_pair(53, 59)) != pairs.end());
  EXPECT_TRUE(std::find(pairs.begin(), pairs.end(), std::make_pair(61, 67)) != pairs.end());
  EXPECT_TRUE(std::find(pairs.begin(), pairs.end(), std::make_pair(73, 79)) != pairs.end());
  // Проверим, что нет пар с p >= 94 (так как p+6 < 100)
  for (const auto& pair : pairs) {
    EXPECT_LT(pair.first + 6, 100);
  }
}

TEST(PrimePairsTest, HandlesNegativeLimit) {
  auto pairs = primePairsDifferBy6(-5);
  EXPECT_TRUE(pairs.empty());
}

TEST(PrimePairsTest, HandlesZeroLimit) {
  auto pairs = primePairsDifferBy6(0);
  EXPECT_TRUE(pairs.empty());
}