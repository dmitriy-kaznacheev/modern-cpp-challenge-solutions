#include "math_problems.h"
#include "prime_utils.h"

namespace MathProblems {

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
    if (isPrime(static_cast<int>(candidate))) {
      return static_cast<int>(candidate);
    }
  }
  return 0;
}

}  // namespace MathProblems