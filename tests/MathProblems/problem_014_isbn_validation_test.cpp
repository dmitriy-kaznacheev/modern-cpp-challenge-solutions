#include <gtest/gtest.h>

#include "math_problems.h"

using namespace MathProblems;

TEST(ISBNValidationTest, ValidISBN10) {
  EXPECT_TRUE(isValidISBN10("0-13-235088-2"));
  EXPECT_TRUE(isValidISBN10("0-306-40615-2"));
  EXPECT_TRUE(isValidISBN10("0-201-63361-2"));
  EXPECT_TRUE(isValidISBN10("080442957X"));
  EXPECT_TRUE(isValidISBN10("0-8044-2957-X"));
}

TEST(ISBNValidationTest, InvalidISBN10) {
  // Неверная длина
  EXPECT_FALSE(isValidISBN10("123456789"));
  EXPECT_FALSE(isValidISBN10("12345678901"));

  // Неверная контрольная сумма
  EXPECT_FALSE(isValidISBN10("0-13-117681-2"));
  EXPECT_FALSE(isValidISBN10("0-470-80524-0"));
  EXPECT_FALSE(isValidISBN10("0-471-60695-7"));
  EXPECT_FALSE(isValidISBN10("0-13-708107-9"));
  EXPECT_FALSE(isValidISBN10("0-13-110362-2"));

  // Недопустимые символы
  EXPECT_FALSE(isValidISBN10("04719586A7"));
}

TEST(ISBNValidationTest, HandlesXAsLastDigit) {
  EXPECT_TRUE(isValidISBN10("123456789X"));
  EXPECT_FALSE(isValidISBN10("1234567890"));
}

TEST(ISBNValidationTest, HandlesLowercaseX) {
  EXPECT_TRUE(isValidISBN10("0-8044-2957-x"));
}

TEST(ISBN13Test, ValidISBN13) {
  EXPECT_TRUE(isValidISBN13("978-0-306-40615-7"));
  EXPECT_TRUE(isValidISBN13("978-0-13-235088-4"));
  EXPECT_TRUE(isValidISBN13("978-0-201-63361-0"));
}

TEST(ISBN13Test, InvalidISBN13) {
  EXPECT_FALSE(isValidISBN13("978-0-306-40615-8"));
  EXPECT_FALSE(isValidISBN13("1234567890123"));
  EXPECT_FALSE(isValidISBN13("978-0-306-40615"));
  EXPECT_FALSE(isValidISBN13("978-0-306-40615-7A"));
}

TEST(ISBN13Test, HandlesWithoutDashes) {
  EXPECT_TRUE(isValidISBN13("9780306406157"));
}