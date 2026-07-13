#include "math_problems.h"

namespace MathProblems {

/**
 * Задача 10: Код Грея (преобразование бинарного числа в код Грея)
 *
 * Преобразует бинарное число в код Грея по формуле: gray = n ^ (n >> 1).
 *
 * Алгоритм: битовый сдвиг и XOR.
 * Сложность: O(1).
 *
 * @param n Бинарное число (unsigned int)
 * @return Код Грея
 *
 * @example
 * unsigned int gray = toGrayCode(5); // 7 (бинарно: 101 -> 111)
 */
unsigned int toGrayCode(unsigned int n) {
  return n ^ (n >> 1);
}

/**
 * Задача 10: Код Грея (преобразование кода Грея обратно в бинарное)
 *
 * Восстанавливает бинарное число из кода Грея последовательным XOR.
 *
 * Алгоритм: последовательно XOR с самим собой со сдвигом вправо.
 * Сложность: O(log2(g)) в худшем случае (количество битов).
 *
 * @param g Код Грея (unsigned int)
 * @return Бинарное число
 *
 * @example
 * unsigned int bin = fromGrayCode(7); // 5 (бинарно: 111 -> 101)
 */
unsigned int fromGrayCode(unsigned int g) {
  unsigned int bin = 0;
  while (g) {
    bin ^= g;
    g >>= 1;
  }
  return bin;
}

}  // namespace MathProblems