#include <cmath>
#include <utility>

#include "math_problems.h"

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

}  // namespace MathProblems