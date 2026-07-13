#include <gtest/gtest.h>

#include "math_problems.h"

using namespace MathProblems;

TEST(GrayCodeTest, ToGray) {
  EXPECT_EQ(toGrayCode(0), 0);
  EXPECT_EQ(toGrayCode(1), 1);
  EXPECT_EQ(toGrayCode(2), 3);
  EXPECT_EQ(toGrayCode(3), 2);
  EXPECT_EQ(toGrayCode(4), 6);
  EXPECT_EQ(toGrayCode(5), 7);
  EXPECT_EQ(toGrayCode(6), 5);
  EXPECT_EQ(toGrayCode(7), 4);
  EXPECT_EQ(toGrayCode(8), 12);
}

TEST(GrayCodeTest, FromGray) {
  EXPECT_EQ(fromGrayCode(0), 0);
  EXPECT_EQ(fromGrayCode(1), 1);
  EXPECT_EQ(fromGrayCode(3), 2);
  EXPECT_EQ(fromGrayCode(2), 3);
  EXPECT_EQ(fromGrayCode(6), 4);
  EXPECT_EQ(fromGrayCode(7), 5);
  EXPECT_EQ(fromGrayCode(5), 6);
  EXPECT_EQ(fromGrayCode(4), 7);
  EXPECT_EQ(fromGrayCode(12), 8);
}

TEST(GrayCodeTest, RoundTrip) {
  for (unsigned int i = 0; i < 100; ++i) {
    unsigned int gray = toGrayCode(i);
    unsigned int bin = fromGrayCode(gray);
    EXPECT_EQ(i, bin);
  }
}