#include "prime_utils.h"

#include <gtest/gtest.h>

#include <vector>

using namespace MathProblems;

TEST(IsPrimeTest, HandlesSmallNumbers) {
  EXPECT_FALSE(isPrime(0));
  EXPECT_FALSE(isPrime(1));
  EXPECT_TRUE(isPrime(2));
  EXPECT_TRUE(isPrime(3));
  EXPECT_FALSE(isPrime(4));
  EXPECT_TRUE(isPrime(5));
  EXPECT_FALSE(isPrime(6));
  EXPECT_TRUE(isPrime(7));
}

TEST(IsPrimeTest, HandlesNegative) {
  EXPECT_FALSE(isPrime(-1));
  EXPECT_FALSE(isPrime(-5));
}

TEST(IsPrimeTest, HandlesLargePrimes) {
  EXPECT_TRUE(isPrime(97));
  EXPECT_TRUE(isPrime(101));
  EXPECT_FALSE(isPrime(100));
}

TEST(SieveTest, HandlesSmallLimit) {
  auto primes = sieveOfEratosthenes(10);
  std::vector<int> expected = {2, 3, 5, 7};
  EXPECT_EQ(primes, expected);
}

TEST(SieveTest, HandlesLimit30) {
  auto primes = sieveOfEratosthenes(30);
  std::vector<int> expected = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};
  EXPECT_EQ(primes, expected);
}

TEST(SieveTest, HandlesZeroAndNegative) {
  EXPECT_TRUE(sieveOfEratosthenes(0).empty());
  EXPECT_TRUE(sieveOfEratosthenes(-5).empty());
}