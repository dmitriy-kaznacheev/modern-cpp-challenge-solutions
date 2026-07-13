#include <cmath>
#include <vector>

#include "math_problems.h"

namespace MathProblems {

/**
 * Задача 9: Простые множители числа
 *
 * Разлагает число на простые множители методом пробного деления.
 *
 * Алгоритм:
 *   Для i от 2 до sqrt(n):
 *     пока n делится на i:
 *       добавляем i в результат
 *       делим n на i
 *   Если после цикла n > 1, добавляем n (это простой множитель)
 *
 * Сложность: O(sqrt(n)) в худшем случае.
 *
 * @param n Целое число (n >= 2)
 * @return Вектор простых множителей в порядке возрастания
 *
 * @example
 * auto factors = primeFactors(12); // {2, 2, 3}
 */
std::vector<long long> primeFactors(long long n) {
  if (n <= 1) {
    return {};
  }

  std::vector<long long> result;
  for (long long i = 2; i * i <= n; ++i) {
    while (n % i == 0) {
      result.push_back(i);
      n /= i;
    }
  }
  if (n > 1) {
    result.push_back(n);
  }
  return result;
}

}  // namespace MathProblems