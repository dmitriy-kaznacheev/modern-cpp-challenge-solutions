#include <unordered_map>
#include <vector>

#include "math_problems.h"
#include "math_utils.h"

namespace MathProblems {

/**
 * Задача 7: Дружественные числа
 *
 * Находит все пары (a, b), a < b < limit, такие что:
 *   sumOfProperDivisors(a) == b   (обозначим s(a) = b)
 *   sumOfProperDivisors(b) == a   (т.е. s(b) == a)
 *
 * Алгоритм:
 *   1. Для каждого n от 2 до limit-1 вычисляем s(n) = sumOfProperDivisors(n).
 *   2. Сохраняем все s(n) в словарь sumMap.
 *   3. Для каждого a проверяем: b = sumMap[a]; если b > a, b < limit и sumMap[b] == a,
 *      то (a, b) — дружественная пара.
 *
 * Сложность: O(limit * sqrt(limit)) по времени, O(limit) по памяти.
 *
 * @param limit Верхняя граница (числа < limit)
 * @return Вектор пар (a, b), отсортированных по a
 */
std::vector<std::pair<int, int>> amicableNumbers(int limit) {
  if (limit <= 220) {
    return {};  // минимальная пара (220, 284)
  }

  // Вычисляем суммы собственных делителей для всех чисел до limit
  std::unordered_map<int, int> sumMap;
  for (int n = 2; n < limit; ++n) {
    sumMap[n] = sumOfProperDivisors(n);
  }

  std::vector<std::pair<int, int>> result;
  for (int a = 2; a < limit; ++a) {
    int b = sumMap[a];
    if ((b > a) && (b < limit) && (sumMap[b] == a)) {
      result.emplace_back(a, b);
    }
  }
  return result;
}

}  // namespace MathProblems