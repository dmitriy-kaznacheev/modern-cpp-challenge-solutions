#include "math_problems.h"
#include "prime_utils.h"

namespace MathProblems {

/**
 * Задача 5: Простые числа, отличающиеся на 6
 *
 * Находит все пары (p, p+6), где p и p+6 — простые числа, p < limit.
 *
 * Алгоритм: перебираем p от 2 до limit-7, проверяем простоту обоих чисел.
 * Сложность: O(limit * sqrt(limit))
 *
 * @param limit Верхняя граница для p (p < limit)
 * @return Вектор пар (p, p+6)
 *
 * @example
 * auto pairs = primePairsDifferBy6(30);
 * // Возвращает: (5,11), (7,13), (11,17), (13,19), (17,23), (23,29)
 */
std::vector<std::pair<int, int>> primePairsDifferBy6(int limit) {
  // минимальная пара (5,11) требует limit > 11
  if (limit <= 7) {
    return {};
  }

  std::vector<std::pair<int, int>> result;
  for (int p = 2; p + 6 < limit; ++p) {
    if (isPrime(p) && isPrime(p + 6)) {
      result.emplace_back(p, p + 6);
    }
  }
  return result;
}

}  // namespace MathProblems