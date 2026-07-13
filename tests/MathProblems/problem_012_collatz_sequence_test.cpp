#include <gtest/gtest.h>

#include "math_problems.h"

using namespace MathProblems;

TEST(CollatzTest, SequenceLength) {
  EXPECT_EQ(collatzSequenceLength(1), 1);
  EXPECT_EQ(collatzSequenceLength(2), 2);
  EXPECT_EQ(collatzSequenceLength(3), 8);
  EXPECT_EQ(collatzSequenceLength(4), 3);
  EXPECT_EQ(collatzSequenceLength(5), 6);
  EXPECT_EQ(collatzSequenceLength(6), 9);
  EXPECT_EQ(collatzSequenceLength(7), 17);
  EXPECT_EQ(collatzSequenceLength(8), 4);
  EXPECT_EQ(collatzSequenceLength(9), 20);
  EXPECT_EQ(collatzSequenceLength(10), 7);
}

TEST(CollatzTest, MaxLengthSmallLimit) {
  EXPECT_EQ(maxCollatzSequenceLength(2), 1);
  EXPECT_EQ(maxCollatzSequenceLength(3), 2);
  EXPECT_EQ(maxCollatzSequenceLength(4), 8);
}

TEST(CollatzTest, MaxLengthLimit10) {
  EXPECT_EQ(maxCollatzSequenceLength(10), 20);
}

TEST(CollatzTest, MaxLengthLimit100) {
  // максимальная длина для 1..99 равна 119 (для 97)
  EXPECT_EQ(maxCollatzSequenceLength(100), 119);
}