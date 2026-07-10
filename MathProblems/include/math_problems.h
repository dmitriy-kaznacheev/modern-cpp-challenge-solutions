#pragma once

#include <vector>

namespace MathProblems {

/**
 * @brief Вычисляет сумму всех натуральных чисел, кратных 3 или 5, до заданного предела
 * @param limit Верхняя граница (числа меньше этого предела)
 * @return Сумма чисел, кратных 3 или 5
 */
unsigned long long sumMultiplesOf3And5(unsigned int limit);

/**
 * @brief Вычисляет наибольший общий делитель (НОД) двух целых чисел
 * @param a Первое целое число
 * @param b Второе целое число
 * @return НОД(a, b) — всегда неотрицательное число
 */
int gcd(int a, int b);

/**
 * @brief Вычисляет наименьшее общее кратное (НОК) двух целых чисел.
 * @param a Первое целое число
 * @param b Второе целое число
 * @return НОК(a, b) — всегда неотрицательное число.
 */
unsigned long long lcm(int a, int b);

/**
 * @brief Находит наибольшее простое число, меньшее заданного предела.
 * @param limit Верхняя граница (ищем простые числа < limit)
 * @return Наибольшее простое число < limit, или 0 если такого нет (limit <= 2)
 */
int largestPrimeBelow(int limit);

/**
 * @brief Находит все пары простых чисел (p, p+6), где p < limit.
 * @param limit Верхняя граница для p (p < limit)
 * @return Вектор пар (p, p+6), где оба числа простые и p+6 < limit
 */
std::vector<std::pair<int, int>> primePairsDifferBy6(int limit);

}  // namespace MathProblems
