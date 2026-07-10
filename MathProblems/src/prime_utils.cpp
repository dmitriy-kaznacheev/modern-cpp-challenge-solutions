#include "prime_utils.h"

#include <cmath>

namespace MathProblems {

bool isPrime(int n) {
  if (n < 2) {
    return false;
  }
  if (n == 2) {
    return true;
  }
  if (n % 2 == 0) {
    return false;
  }

  for (int i = 3; i * i <= n; i += 2) {
    if (n % i == 0) {
      return false;
    }
  }
  return true;
}

std::vector<int> sieveOfEratosthenes(int limit) {
  if (limit <= 2) {
    return {};
  }

  std::vector<bool> sieve(limit, true);
  sieve[0] = sieve[1] = false;

  int sqrtLimit = static_cast<int>(std::sqrt(limit));
  for (int p = 2; p <= sqrtLimit; ++p) {
    if (sieve[p]) {
      for (int multiple = p * p; multiple < limit; multiple += p) {
        sieve[multiple] = false;
      }
    }
  }

  std::vector<int> primes;
  for (int i = 2; i < limit; ++i) {
    if (sieve[i]) {
      primes.push_back(i);
    }
  }
  return primes;
}

}  // namespace MathProblems