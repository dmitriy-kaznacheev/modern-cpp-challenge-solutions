#include <stdexcept>
#include <string>

#include "math_problems.h"

namespace MathProblems {

/**
 * Задача 11: Преобразование десятичных чисел в римские
 *
 * Преобразует целое число (1..3999) в строку с римскими цифрами.
 *
 * Алгоритм: последовательно вычитаем значения из предопределённого списка
 * (от наибольшего к наименьшему), добавляя соответствующие символы.
 *
 * Сложность: O(1) (константное количество итераций).
 *
 * @param n Десятичное число (1 <= n <= 3999)
 * @return Строка с римским представлением
 *
 * @example
 * std::string roman = toRoman(1994); // "MCMXCIV"
 */
std::string toRoman(int n) {
  if ((n <= 0) || (n >= 4000)) {
    throw std::out_of_range("Number must be between 1 and 3999");
  }

  // Пары (значение, римский символ)
  struct RomanDigit {
    int value;
    const char* symbol;
  };

  static const RomanDigit digits[] = {{1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"}, {100, "C"},
                                      {90, "XC"},  {50, "L"},   {40, "XL"}, {10, "X"},   {9, "IX"},
                                      {5, "V"},    {4, "IV"},   {1, "I"}};

  std::string result;
  for (const auto& digit : digits) {
    while (n >= digit.value) {
      result += digit.symbol;
      n -= digit.value;
    }
  }
  return result;
}

}  // namespace MathProblems