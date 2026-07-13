#include <gtest/gtest.h>

#include <cmath>

#include "math_problems.h"

using namespace MathProblems;

TEST(CalculatePiTest, HandlesSmallIterations) {
  EXPECT_NEAR(calculatePi(1), 4.0, 1e-9);
  EXPECT_NEAR(calculatePi(2), 2.6666666667, 1e-9);
}

TEST(CalculatePiTest, HandlesMoreIterations) {
  double pi = calculatePi(10000);
  EXPECT_NEAR(pi, M_PI, 0.001);
}

TEST(CalculatePiTest, Handles100000Iterations) {
  double pi = calculatePi(100000);
  EXPECT_NEAR(pi, M_PI, 0.0001);
}

TEST(CalculatePiTest, HandlesZeroAndNegative) {
  EXPECT_EQ(calculatePi(0), 0.0);
  EXPECT_EQ(calculatePi(-5), 0.0);
}