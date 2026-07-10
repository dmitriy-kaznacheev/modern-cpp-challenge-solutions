#include "math_problems.h"

namespace MathProblems {

namespace detail {

static bool isPrime(int n) {
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

}  // namespace detail

/**
 * Задача 4: Наибольшее простое число меньше заданного предела
 *
 * Алгоритм: начинаем с limit-1 и идём вниз, пока не найдём простое.
 * Сложность: O(limit * sqrt(limit)) в худшем случае.
 *
 * @param limit Верхняя граница (ищем простые числа < limit)
 * @return Наибольшее простое число < limit, или 0 если limit <= 2
 *
 * @example
 * int result = largestPrimeBelow(20);  // result == 19
 */
int largestPrimeBelow(int limit) {
  if (limit <= 2) {
    return 0;
  }

  // Работаем с unsigned для безопасного перебора вниз
  unsigned int lim = static_cast<unsigned int>(limit);
  for (unsigned int candidate = limit - 1; candidate >= 2; --candidate) {
    if (detail::isPrime(static_cast<int>(candidate))) {
      return static_cast<int>(candidate);
    }
  }
  return 0;
}

}  // namespace MathProblems