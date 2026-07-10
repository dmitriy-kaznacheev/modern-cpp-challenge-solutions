#include <cmath>
#include <vector>

#include "math_problems.h"

namespace MathProblems {

namespace detail {

// Возвращает количество цифр в числе.
int countDigits(int n) {
  if (n == 0) {
    return 1;
  }

  // Защита от переполнения при INT_MIN
  long long num = std::abs(static_cast<long long>(n));
  int count = 0;
  while (num > 0) {
    ++count;
    num /= 10;
  }
  return count;
}

// Возводит число в степень (целочисленно).
int intPow(int base, int exp) {
  int result = 1;
  for (int i = 0; i < exp; ++i) {
    result *= base;
  }
  return result;
}

}  // namespace detail

/**
 * Задача 8: Числа Армстронга
 *
 * Возвращает все числа меньше заданного предела, которые являются числами Армстронга.
 * Число Армстронга — это число, равное сумме своих цифр, возведённых в степень,
 * равную количеству цифр в этом числе.
 *
 * Алгоритм: для каждого числа от 1 до limit-1 вычисляем количество цифр,
 * затем сумму цифр, возведённых в эту степень, и сравниваем с исходным числом.
 *
 * Сложность: O(limit * log10(limit)) по времени, O(1) по памяти.
 *
 *
 * @param limit Верхняя граница (ищем числа < limit)
 * @return Вектор чисел Армстронга в порядке возрастания
 * @example
 * auto nums = armstrongNumbers(200); // {1,2,3,4,5,6,7,8,9,153}
 */
std::vector<int> armstrongNumbers(int limit) {
  if (limit <= 1) {
    return {};
  }

  std::vector<int> result;
  for (int n = 1; n < limit; ++n) {
    int value = n;
    int digits = detail::countDigits(n);
    int powerSum = 0;
    while (value != 0) {
      int lastDigit = value % 10;
      powerSum += detail::intPow(lastDigit, digits);
      value /= 10;
    }
    if (powerSum == n) {
      result.push_back(n);
    }
  }
  return result;
}

}  // namespace MathProblems