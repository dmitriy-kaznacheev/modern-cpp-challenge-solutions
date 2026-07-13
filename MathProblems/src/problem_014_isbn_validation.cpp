#include <algorithm>
#include <cctype>
#include <numeric>
#include <string>

#include "math_problems.h"

namespace MathProblems {

/**
 * Задача 14: Проверка действительности номеров ISBN-10
 *
 * Проверяет, является ли переданная строка корректным номером ISBN-10.
 * Формат: 10 символов (цифры, последний может быть 'X'), допускаются дефисы.
 *
 * Алгоритм:
 * 1. Удаляем дефисы.
 * 2. Проверяем длину (10).
 * 3. Проверяем, что первые 9 символов — цифры.
 * 4. Последний символ — цифра или 'X'.
 * 5. Вычисляем контрольную сумму:
 *    sum = 10*d1 + 9*d2 + ... + 1*d10.
 * 6. Действительно, если sum % 11 == 0.
 *
 * @param isbn Строка с номером ISBN
 * @return true, если номер корректен
 */
bool isValidISBN10(const std::string& isbn) {
  // 1. Удаляем все дефисы
  std::string clean = isbn;
  clean.erase(std::remove(clean.begin(), clean.end(), '-'), clean.end());

  // 2. Проверяем длину и формат
  if (clean.length() != 10) {
    return false;
  }

  // 3. Первые 9 символов должны быть цифрами
  if (!std::all_of(clean.begin(), clean.begin() + 9, ::isdigit)) {
    return false;
  }

  // 4. Последний символ — цифра или 'X'/'x'
  char last = clean.back();
  if (!(std::isdigit(last) || (last == 'X') || (last == 'x'))) {
    return false;
  }

  // 5. Вычисляем контрольную сумму
  int sum = std::accumulate(clean.begin(), clean.end(), 0, [weight = 10](int acc, char ch) mutable {
    int digit = ((ch == 'X') || (ch == 'x')) ? 10 : ch - '0';
    return acc + weight-- * digit;
  });

  return (sum % 11 == 0);
}

}  // namespace MathProblems