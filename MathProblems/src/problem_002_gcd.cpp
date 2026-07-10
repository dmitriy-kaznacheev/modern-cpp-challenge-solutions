#include <cmath>
#include <utility>

#include "math_problems.h"

namespace MathProblems {

/**
 * Задача 2: Наибольший общий делитель (НОД)
 *
 * Реализация алгоритма Евклида для нахождения НОД двух чисел.
 *
 * Алгоритм: Алгоритм Евклида
 * Сложность: O(log(min(a,b))) по времени, O(1) по памяти
 *
 * @param a Первое целое число
 * @param b Второе целое число
 * @return НОД(a, b) — всегда неотрицательное число
 *
 * @example
 * int result = gcd(54, 24);  // result == 6
 */
int gcd(int a, int b) {
  // Защита от INT_MIN: приводим к long long, берем abs, затем в unsigned
  unsigned int a_ = static_cast<unsigned int>(std::abs(static_cast<long long>(a)));
  unsigned int b_ = static_cast<unsigned int>(std::abs(static_cast<long long>(b)));

  while (b_ != 0) {
    a_ = std::exchange(b_, a_ % b_);
  }

  return static_cast<int>(a_);
}

}  // namespace MathProblems