#pragma once

#include <string>
#include <utility>
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

/**
 * @brief Возвращает все избыточные числа (abundant numbers) меньше заданного предела.
 * @param limit Верхняя граница (числа < limit)
 * @return Вектор избыточных чисел в порядке возрастания
 */
std::vector<int> abundantNumbers(int limit);

/**
 * @brief Возвращает все пары дружественных чисел (a, b), где a < b < limit.
 * @param limit Верхняя граница (числа < limit)
 * @return Вектор пар (a, b), отсортированных по возрастанию a
 */
std::vector<std::pair<int, int>> amicableNumbers(int limit);

/**
 * @brief Возвращает все числа Армстронга (нарциссические числа) меньше заданного предела.
 * @param limit Верхняя граница (числа < limit)
 * @return Вектор чисел Армстронга в порядке возрастания
 */
std::vector<int> armstrongNumbers(int limit);

/**
 * @brief Возвращает все простые множители числа в порядке возрастания.
 * @param n Целое положительное число (n >= 2)
 * @return Вектор простых множителей (с повторениями)
 */
std::vector<long long> primeFactors(long long n);

/**
 * @brief Преобразует бинарное число в код Грея.
 * @param n Бинарное число (беззнаковое)
 * @return Код Грея
 */
unsigned int toGrayCode(unsigned int n);

/**
 * @brief Преобразует код Грея обратно в бинарное число.
 * @param g Код Грея (беззнаковое)
 * @return Бинарное число
 */
unsigned int fromGrayCode(unsigned int g);

/**
 * @brief Преобразует десятичное число (1..3999) в римскую строку.
 * @param n Десятичное число (1 <= n <= 3999)
 * @return Строка с римским представлением числа
 */
std::string toRoman(int n);

/**
 * @brief Находит длину последовательности Коллатца для заданного числа.
 * @param n Начальное число (n >= 1)
 * @return Длина последовательности (количество членов, включая начальное и 1)
 */
unsigned long long collatzSequenceLength(unsigned long long n);

/**
 * @brief Находит наибольшую длину последовательности Коллатца для чисел < limit.
 * @param limit Верхняя граница (ищем числа < limit)
 * @return Длина самой длинной последовательности
 */
unsigned long long maxCollatzSequenceLength(unsigned int limit);

}  // namespace MathProblems
