#include <gtest/gtest.h>

#include <vector>

#include "math_problems.h"

using namespace MathProblems;

TEST(PrimeFactorsTest, HandlesPrimeNumber) {
  EXPECT_EQ(primeFactors(2), std::vector<long long>({2}));
  EXPECT_EQ(primeFactors(3), std::vector<long long>({3}));
  EXPECT_EQ(primeFactors(13), std::vector<long long>({13}));
}

TEST(PrimeFactorsTest, HandlesCompositeNumber) {
  EXPECT_EQ(primeFactors(4), std::vector<long long>({2, 2}));
  EXPECT_EQ(primeFactors(12), std::vector<long long>({2, 2, 3}));
  EXPECT_EQ(primeFactors(18), std::vector<long long>({2, 3, 3}));
  EXPECT_EQ(primeFactors(100), std::vector<long long>({2, 2, 5, 5}));
}

TEST(PrimeFactorsTest, HandlesLargePrime) {
  auto factors = primeFactors(999983);  // простое число
  EXPECT_EQ(factors, std::vector<long long>({999983}));
}

TEST(PrimeFactorsTest, HandlesLargeComposite) {
  auto factors = primeFactors(999983 * 2);
  EXPECT_EQ(factors, std::vector<long long>({2, 999983}));
}

TEST(PrimeFactorsTest, HandlesOneAndZero) {
  EXPECT_TRUE(primeFactors(1).empty());
  EXPECT_TRUE(primeFactors(0).empty());
}

TEST(PrimeFactorsTest, HandlesProjectEulerNumber) {
  auto factors = primeFactors(600851475143LL);
  std::vector<long long> expected = {71, 839, 1471, 6857};
  EXPECT_EQ(factors, expected);
}