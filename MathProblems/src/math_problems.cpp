#include "math_problems.h"

#include <cmath>
#include <utility>

namespace MathProblems {

/**
 * Задача 1: Сумма натуральных чисел, кратных 3 или 5
 *
 * Вычисляет сумму всех натуральных чисел меньше заданного предела,
 * которые делятся на 3 или на 5.
 *
 * Алгоритм: Прямой перебор с проверкой остатка от деления
 * Сложность: O(n) по времени, O(1) по памяти
 *
 * @param limit Верхняя граница (суммируются числа < limit)
 * @return Сумма всех чисел < limit, кратных 3 или 5
 *
 * @example
 * auto result = sumMultiplesOf3And5(10);  // 3 + 5 + 6 + 9 = 23
 */
unsigned long long sumMultiplesOf3And5(unsigned int limit) {
  unsigned long long sum = 0;

  for (unsigned int i = 3; i < limit; ++i) {
    if ((i % 3 == 0) || (i % 5 == 0)) {
      sum += i;
    }
  }

  return sum;
}

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
  unsigned int aa = static_cast<unsigned int>(std::abs(static_cast<long long>(a)));
  unsigned int bb = static_cast<unsigned int>(std::abs(static_cast<long long>(b)));

  while (bb != 0) {
    aa = std::exchange(bb, aa % bb);
  }

  return static_cast<int>(aa);
}

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

  long long aa = std::abs(static_cast<long long>(a));
  long long bb = std::abs(static_cast<long long>(b));

  int g = gcd(static_cast<int>(aa), static_cast<int>(bb));

  // Деление первым, чтобы избежать переполнения
  unsigned long long result = (aa / g) * bb;
  return result;
}

}  // namespace MathProblems