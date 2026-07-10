#include <cmath>
#include <utility>

#include "math_problems.h"

namespace MathProblems {

/**
 * Задача 3: Наименьшее общее кратное (НОК)
 *
 * Вычисляет наименьшее общее кратное двух целых чисел.
 *
 * Алгоритм: Используется формула: lcm(a,b) = |a| / gcd(a,b) * |b|
 * Сложность: O(log(min(|a|,|b|))) по времени (за счёт gcd), O(1) по памяти
 *
 * Важно: возвращаемый тип unsigned long long, чтобы избежать переполнения
 * при умножении больших чисел. Сначала выполняется деление на gcd,
 * затем умножение, что минимизирует риск переполнения.
 *
 * @param a Первое целое число
 * @param b Второе целое число
 * @return НОК(a, b) — всегда неотрицательное число (0 если a==0 или b==0)
 *
 * @example
 * auto result = lcm(4, 6);  // result == 12
 */
unsigned long long lcm(int a, int b) {
  if ((a == 0) || (b == 0)) {
    return 0;
  }

  long long a_ = std::abs(static_cast<long long>(a));
  long long b_ = std::abs(static_cast<long long>(b));

  int gcd_ = gcd(static_cast<int>(a_), static_cast<int>(b_));

  // Деление первым, чтобы избежать переполнения
  unsigned long long result = (a_ / gcd_) * b_;
  return result;
}

}  // namespace MathProblems