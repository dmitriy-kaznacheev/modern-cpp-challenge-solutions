#include <climits>
#include <unordered_map>

#include "math_problems.h"

namespace MathProblems {

/**
 * Задача 12: Наибольшая последовательность Коллатца
 *
 * Вычисляет длину последовательности Коллатца для заданного числа.
 * Использует мемоизацию (кеширование) для ускорения повторных вычислений.
 *
 * Сложность: O(log n) в среднем с кешированием.
 *
 * @param n Начальное число (n >= 1)
 * @return Длина последовательности (включая n и 1)
 *
 * @example
 * unsigned long long len = collatzSequenceLength(13); // 10
 */
unsigned long long collatzSequenceLength(unsigned long long n) {
  static std::unordered_map<unsigned long long, unsigned long long> memo;
  if (n == 1) {
    return 1;
  }

  if (auto it = memo.find(n); it != memo.end()) {
    return it->second;
  }

  unsigned long long next;
  if (n % 2 == 0) {
    next = n / 2;
  } else {
    // Защита от переполнения при n * 3 + 1
    if (n > (ULLONG_MAX - 1) / 3) {
      return 0;  // не должно случиться для разумных чисел
    }
    next = n * 3 + 1;
  }

  unsigned long long result = 1 + collatzSequenceLength(next);
  memo[n] = result;
  return result;
}

/**
 * Задача 12: Наибольшая последовательность Коллатца
 *
 * Находит максимальную длину последовательности Коллатца среди всех чисел
 * от 1 до limit-1.
 *
 * @param limit Верхняя граница (ищем числа < limit)
 * @return Длина самой длинной последовательности
 *
 * @example
 * unsigned long long maxLen = maxCollatzSequenceLength(10); // 20 (для числа 9)
 */
unsigned long long maxCollatzSequenceLength(unsigned int limit) {
  if (limit <= 1) {
    return 0;
  }

  unsigned long long maxLength = 0;
  for (unsigned int i = 1; i < limit; ++i) {
    unsigned long long length = collatzSequenceLength(i);
    if (length > maxLength) {
      maxLength = length;
    }
  }
  return maxLength;
}

}  // namespace MathProblems