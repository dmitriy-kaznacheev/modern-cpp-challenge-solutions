#include <gtest/gtest.h>

#include "math_problems.h"

using namespace MathProblems;

TEST(ToRomanTest, HandlesSingleDigits) {
  EXPECT_EQ(toRoman(1), "I");
  EXPECT_EQ(toRoman(2), "II");
  EXPECT_EQ(toRoman(3), "III");
  EXPECT_EQ(toRoman(4), "IV");
  EXPECT_EQ(toRoman(5), "V");
  EXPECT_EQ(toRoman(6), "VI");
  EXPECT_EQ(toRoman(7), "VII");
  EXPECT_EQ(toRoman(8), "VIII");
  EXPECT_EQ(toRoman(9), "IX");
}

TEST(ToRomanTest, HandlesTens) {
  EXPECT_EQ(toRoman(10), "X");
  EXPECT_EQ(toRoman(20), "XX");
  EXPECT_EQ(toRoman(30), "XXX");
  EXPECT_EQ(toRoman(40), "XL");
  EXPECT_EQ(toRoman(50), "L");
  EXPECT_EQ(toRoman(60), "LX");
  EXPECT_EQ(toRoman(70), "LXX");
  EXPECT_EQ(toRoman(80), "LXXX");
  EXPECT_EQ(toRoman(90), "XC");
}

TEST(ToRomanTest, HandlesHundreds) {
  EXPECT_EQ(toRoman(100), "C");
  EXPECT_EQ(toRoman(200), "CC");
  EXPECT_EQ(toRoman(300), "CCC");
  EXPECT_EQ(toRoman(400), "CD");
  EXPECT_EQ(toRoman(500), "D");
  EXPECT_EQ(toRoman(600), "DC");
  EXPECT_EQ(toRoman(700), "DCC");
  EXPECT_EQ(toRoman(800), "DCCC");
  EXPECT_EQ(toRoman(900), "CM");
}

TEST(ToRomanTest, HandlesThousands) {
  EXPECT_EQ(toRoman(1000), "M");
  EXPECT_EQ(toRoman(2000), "MM");
  EXPECT_EQ(toRoman(3000), "MMM");
}

TEST(ToRomanTest, HandlesComplexNumbers) {
  EXPECT_EQ(toRoman(58), "LVIII");
  EXPECT_EQ(toRoman(1994), "MCMXCIV");
  EXPECT_EQ(toRoman(2019), "MMXIX");
  EXPECT_EQ(toRoman(3999), "MMMCMXCIX");
}

TEST(ToRomanTest, ThrowsOnInvalidInput) {
  EXPECT_THROW(toRoman(0), std::out_of_range);
  EXPECT_THROW(toRoman(-5), std::out_of_range);
  EXPECT_THROW(toRoman(4000), std::out_of_range);
}