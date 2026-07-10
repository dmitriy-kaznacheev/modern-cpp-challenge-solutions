#pragma once

#include <vector>

namespace MathProblems {

/**
 * @brief Проверяет, является ли число простым.
 * @param n Проверяемое целое число (может быть отрицательным)
 * @return true если число простое, иначе false
 */
bool isPrime(int n);

/**
 * @brief Возвращает все простые числа меньше заданного предела.
 * @param limit Верхняя граница (ищем простые числа < limit)
 * @return Вектор простых чисел в порядке возрастания
 */
std::vector<int> sieveOfEratosthenes(int limit);

}  // namespace MathProblems