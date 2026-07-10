#include <vector>

#include "math_problems.h"
#include "math_utils.h"

namespace MathProblems {

/**
 * Задача 6: Избыточные числа
 *
 * Возвращает все числа меньше limit, у которых сумма собственных делителей больше самого числа.
 *
 * @param limit Верхняя граница (числа < limit)
 * @return Вектор избыточных чисел
 */
std::vector<int> abundantNumbers(int limit) {
  if (limit <= 12) {
    return {};  // первое избыточное число — 12
  }

  std::vector<int> result;
  for (int n = 2; n < limit; ++n) {
    if (sumOfProperDivisors(n) > n) {
      result.push_back(n);
    }
  }
  return result;
}

}  // namespace MathProblems