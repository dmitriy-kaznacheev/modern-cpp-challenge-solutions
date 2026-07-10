#pragma once

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

}  // namespace MathProblems
