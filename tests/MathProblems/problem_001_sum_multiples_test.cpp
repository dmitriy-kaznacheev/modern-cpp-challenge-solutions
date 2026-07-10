#include <gtest/gtest.h>

#include "math_problems.h"

using namespace MathProblems;

TEST(SumMultiplesTest, HandlesSmallLimit) {
  EXPECT_EQ(sumMultiplesOf3And5(10), 23);  // 3 + 5 + 6 + 9 = 23
  EXPECT_EQ(sumMultiplesOf3And5(15), 45);  // 3+5+6+9+10+12 = 45
}

TEST(SumMultiplesTest, HandlesSmallValues) {
  EXPECT_EQ(sumMultiplesOf3And5(3), 0);  // нет чисел < 3
  EXPECT_EQ(sumMultiplesOf3And5(4), 3);  // только 3
  EXPECT_EQ(sumMultiplesOf3And5(6), 8);  // 3 + 5 = 8
}

TEST(SumMultiplesTest, HandlesZeroLimit) {
  EXPECT_EQ(sumMultiplesOf3And5(0), 0);
  EXPECT_EQ(sumMultiplesOf3And5(1), 0);
}

TEST(SumMultiplesTest, HandlesLargeLimit) {
  // для предела 100:
  // 3+5+6+9+10+12+15+18+20+21+24+25+27+30+33+35+36+39+40+42+45+48+50+51+54+55+57+60+63+65+66+69+70+72+75+78+80+81+84+85+87+90+93+95+96+99
  // = 2318
  EXPECT_EQ(sumMultiplesOf3And5(100), 2318);
}

TEST(SumMultiplesTest, HandlesVeryLargeLimit) {
  // проверяем, что используется unsigned long long
  auto result = sumMultiplesOf3And5(100000);
  // результат > 0 - нет переполнения
  EXPECT_GT(result, 0);
}

TEST(SumMultiplesTest, HandlesEdgeCases) {
  EXPECT_EQ(sumMultiplesOf3And5(3), 0);
  EXPECT_EQ(sumMultiplesOf3And5(5), 3);   // только 3
  EXPECT_EQ(sumMultiplesOf3And5(6), 8);   // 3 + 5 = 8
  EXPECT_EQ(sumMultiplesOf3And5(9), 14);  // 3 + 5 + 6 = 14
}