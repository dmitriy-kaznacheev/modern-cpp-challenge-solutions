# Современный C++: Решение задач

[![C++](https://img.shields.io/badge/C++-17-blue.svg)](https://en.cppreference.com/w/cpp/17)
[![CMake](https://img.shields.io/badge/CMake-3.24+-green.svg)](https://cmake.org/)
[![GoogleTest](https://img.shields.io/badge/GoogleTest-1.10+-red.svg)](https://github.com/google/googletest)
[![Progress](https://img.shields.io/badge/Прогресс-11%25-orange.svg)](INDEX.md)
[![CI](https://github.com/Dmitriy-Kaznacheev/modern-cpp-challenge-solutions/actions/workflows/ci.yml/badge.svg)](https://github.com/Dmitriy-Kaznacheev/modern-cpp-challenge-solutions/actions/workflows/ci.yml)

> Мои решения задач из книги **"The Modern C++ Challenge"** Мариуса Бансила

## Цель проекта

Этот репозиторий создан для:
- **Практики** современного C++ (C++17/20)
- **Закрепления** знаний алгоритмов и паттернов проектирования
- **Создания личного справочника** решений на будущее
- **Демонстрации** навыков написания чистого кода с тестами

## Структура

Репозиторий организован по тематическим разделам, соответствующим главам книги:

| Раздел | Описание | Решено | Прогресс |
|--------|----------|--------|----------|
| [MathProblems](MathProblems/) | Математические задачи | 11/14 | ▇▇▇▇▇▇▇░░░ 79% |
| [LanguageFeatures](LanguageFeatures/) | Особенности языка C++ | 0/8 | ░░░░░░░░░░ 0% |
| [StringsRegex](StringsRegex/) | Строки и регулярные выражения | 0/9 | ░░░░░░░░░░ 0% |
| [StreamsFilesystem](StreamsFilesystem/) | Потоки и файловая система | 0/7| ░░░░░░░░░░ 0% |
| [DateTime](DateTime/) | Дата и время | 0/6| ░░░░░░░░░░ 0% |
| [AlgorithmsDataStructures](AlgorithmsDataStructures/) | Алгоритмы и структуры данных | 0/16 | ░░░░░░░░░░ 0% |
| [Concurrency](Concurrency/) | Многопоточность | 0/6 | ░░░░░░░░░░ 0% |
| [DesignPatterns](DesignPatterns/) | Паттерны проектирования | 0/6 | ░░░░░░░░░░ 0% |
| [Serialization](Serialization/) | Сериализация данных | 0/6 | ░░░░░░░░░░ 0% |
| [ArchivesImagesDatabases](ArchivesImagesDatabases/) | Архивы, изображения, БД | 0/9 | ░░░░░░░░░░ 0% |
| [Cryptography](Cryptography/) | Криптография | 0/7 | ░░░░░░░░░░ 0% |
| [NetworkingServices](NetworkingServices/) | Сеть и веб-сервисы | 0/6 | ░░░░░░░░░░ 0% |
| **Всего** | | **11/100** | ░░░░░░░░░░ 11% |

# Индекс решений

Быстрая навигация по всем задачам. Нажмите на ссылку, чтобы перейти к решению.

## Легенда статусов

- ✅ — решено и протестировано
- 🔄 — в процессе
- ⬜ — не начато
- ❌ — пропущено

---

## MathProblems (Математические задачи) — 14 задач

Для решения задач этого раздела используются вспомогательные модули:
#### 1. [`prime_utils.h`](MathProblems/include/prime_utils.h) — работа с простыми числами
- `isPrime(int n)` — проверка простоты (задачи №4, №5);
- `sieveOfEratosthenes(int limit)` — решето Эратосфена для генерации простых чисел (бонус).

#### 2. [`math_utils.h`](MathProblems/include/math_utils.h) — работа с делителями чисел
- `sumOfProperDivisors(int n)` — сумма собственных делителей (задачи №6, №7).


| № | Задача | Статус | Решение | Тест |
|---|--------|--------|------|------|
| 1 | Сумма натуральных чисел, кратных 3 и 5 | ✅ | [problem](MathProblems/src/problem_001_sum_multiples.cpp)  | [test](tests/MathProblems/problem_001_sum_multiples_test.cpp) |
| 2 | Наибольший общий делитель (НОД)        | ✅ | [problem](MathProblems/src/problem_002_gcd.cpp)            | [test](tests/MathProblems/problem_002_gcd_test.cpp) |
| 3 | Наименьшее общее кратное (НОК)         | ✅ | [problem](MathProblems/src/problem_003_lcm.cpp)            | [test](tests/MathProblems/problem_003_lcm_test.cpp) |
| 4 | Наибольшее простое число меньше заданного | ✅ | [problem](MathProblems/src/problem_004_largest_prime_below.cpp) | [test](tests/MathProblems/problem_004_largest_prime_below_test.cpp) |
| 5 | Простые числа, отличающиеся на 6 | ✅ | [problem](MathProblems/src/problem_005_prime_pairs.cpp) | [test](tests/MathProblems/problem_005_prime_pairs_test.cpp) |
| 6 | Избыточные числа | ✅ | [problem](MathProblems/src/problem_006_abundant_numbers.cpp) | [test](tests/MathProblems/problem_006_abundant_numbers_test.cpp) |
| 7 | Дружественные числа | ✅ | [problem](MathProblems/src/problem_007_amicable_numbers.cpp) | [test](tests/MathProblems/problem_007_amicable_numbers_test.cpp) |
| 8 | Числа Армстронга | ✅ | [problem](MathProblems/src/problem_008_armstrong_numbers.cpp) | [test](tests/MathProblems/problem_008_armstrong_numbers_test.cpp) |
| 9 | Простые множители числа | ✅ | [problem](MathProblems/src/problem_009_prime_factors.cpp) | [test](tests/MathProblems/problem_009_prime_factors_test.cpp) |
| 10 | Код Грея | ✅ | [problem](MathProblems/src/problem_010_gray_code.cpp) | [test](tests/MathProblems/problem_010_gray_code_test.cpp) |
| 11 | Преобразование десятичных чисел в римские | ✅ | [problem](MathProblems/src/problem_011_to_roman.cpp) | [test](tests/MathProblems/problem_011_to_roman_test.cpp) |
| 12 |  | ⬜ | - | - |
| 13 |  | ⬜ | - | - |
| 14 |  | ⬜ | - | - |

---

## LanguageFeatures (Языковые возможности) — 8 задач

| № | Задача | Статус | Решение | Тест |
|---|--------|--------|------|------|
| 15 | | ⬜ | - | - |
| 16 | | ⬜ | - | - |
| 17 | | ⬜ | - | - |
| 18 | | ⬜ | - | - |
| 19 | | ⬜ | - | - |
| 20 | | ⬜ | - | - |
| 21 | | ⬜ | - | - |
| 22 | | ⬜ | - | - |

---

## StringsRegex (Строки и регулярные выражения) — 9 задач

| № | Задача | Статус | Решение | Тест |
|---|--------|--------|------|------|
| 23 | | ⬜ | - | - |
| 24 | | ⬜ | - | - |
| 25 | | ⬜ | - | - |
| 26 | | ⬜ | - | - |
| 27 | | ⬜ | - | - |
| 28 | | ⬜ | - | - |
| 29 | | ⬜ | - | - |
| 30 | | ⬜ | - | - |
| 31 | | ⬜ | - | - |

---

## StreamsFilesystem (Потоки и файловая система) — 7 задач

| № | Задача | Статус | Решение | Тест |
|---|--------|--------|------|------|
| 32 | | ⬜ | - | - |
| 33 | | ⬜ | - | - |
| 34 | | ⬜ | - | - |
| 35 | | ⬜ | - | - |
| 36 | | ⬜ | - | - |
| 37 | | ⬜ | - | - |
| 38 | | ⬜ | - | - |

---

## DateTime (Дата и время) — 6 задач

| № | Задача | Статус | Решение | Тест |
|---|--------|--------|------|------|
| 39 | | ⬜ | - | - |
| 40 | | ⬜ | - | - |
| 41 | | ⬜ | - | - |
| 42 | | ⬜ | - | - |
| 43 | | ⬜ | - | - |
| 44 | | ⬜ | - | - |

---

## AlgorithmsDataStructures (Алгоритмы и структуры данных) — 16 задач

| № | Задача | Статус | Решение | Тест |
|---|--------|--------|------|------|
| 45 | | ⬜ | - | - |
| 46 | | ⬜ | - | - |
| 47 | | ⬜ | - | - |
| 48 | | ⬜ | - | - |
| 49 | | ⬜ | - | - |
| 50 | | ⬜ | - | - |
| 51 | | ⬜ | - | - |
| 52 | | ⬜ | - | - |
| 53 | | ⬜ | - | - |
| 54 | | ⬜ | - | - |
| 55 | | ⬜ | - | - |
| 56 | | ⬜ | - | - |
| 57 | | ⬜ | - | - |
| 58 | | ⬜ | - | - |
| 59 | | ⬜ | - | - |
| 60 | | ⬜ | - | - |

---

## Concurrency (Многопоточность) — 6 задач

| № | Задача | Статус | Решение | Тест |
|---|--------|--------|------|------|
| 61 | | ⬜ | - | - |
| 62 | | ⬜ | - | - |
| 63 | | ⬜ | - | - |
| 64 | | ⬜ | - | - |
| 65 | | ⬜ | - | - |
| 66 | | ⬜ | - | - |

---

## DesignPatterns (Паттерны проектирования) — 6 задач

| № | Задача | Статус | Решение | Тест |
|---|--------|--------|------|------|
| 67 |  | ⬜ | - | - |
| 68 |  | ⬜ | - | - |
| 69 |  | ⬜ | - | - |
| 70 |  | ⬜ | - | - |
| 71 |  | ⬜ | - | - |
| 72 |  | ⬜ | - | - |

---

## Serialization (Сериализация данных) — 6 задач

| № | Задача | Статус | Решение | Тест |
|---|--------|--------|------|------|
| 73 |  | ⬜ | - | - |
| 74 |  | ⬜ | - | - |
| 75 |  | ⬜ | - | - |
| 76 |  | ⬜ | - | - |
| 77 |  | ⬜ | - | - |
| 78 |  | ⬜ | - | - |

---

## ArchivesImagesDatabases (Архивы, изображения, БД) — 9 задач

| № | Задача | Статус | Решение | Тест |
|---|--------|--------|------|------|
| 79 |  | ⬜ | - | - |
| 80 |  | ⬜ | - | - |
| 81 |  | ⬜ | - | - |
| 82 |  | ⬜ | - | - |
| 83 |  | ⬜ | - | - |
| 84 |  | ⬜ | - | - |
| 85 |  | ⬜ | - | - |
| 86 |  | ⬜ | - | - |
| 87 |  | ⬜ | - | - |

---

## Cryptography (Криптография) — 7 задач

| № | Задача | Статус | Решение | Тест |
|---|--------|--------|------|------|
| 88 |  | ⬜ | - | - |
| 89 |  | ⬜ | - | - |
| 90 |  | ⬜ | - | - |
| 91 |  | ⬜ | - | - |
| 92 |  | ⬜ | - | - |
| 93 |  | ⬜ | - | - |
| 94 |  | ⬜ | - | - |

---

## NetworkingServices (Сеть и веб-сервисы) — 6 задач

| № | Задача | Статус | Решение | Тест |
|---|--------|--------|------|------|
| 95 |  | ⬜ | - | - |
| 96 |  | ⬜ | - | - |
| 97 |  | ⬜ | - | - |
| 98 |  | ⬜ | - | - |
| 99 |  | ⬜ | - | - |
| 100 | | ⬜ | - | - |

---

## Сборка и тестирование

### Требования
- CMake 3.24+
- Компилятор с поддержкой C++17 (GCC 7+, Clang 5+, MSVC 2017+)
- Интернет (для автоматической загрузки GoogleTest)

### Сборка проекта
```bash
# Клонируйте репозиторий
git clone https://github.com/Dmitriy-Kaznacheev/modern-cpp-challenge-solutions.git
cd modern-cpp-challenge-solutions

# Создайте папку для сборки
mkdir build && cd build

# Сгенерируйте файлы сборки
cmake ..

# Соберите проект
cmake --build .
```

### Запуск тестов
```bash
# Из папки build:
ctest --output-on-failure

# Или напрямую:
./tests/challenge_tests
```

### Как использовать этот репозиторий
- **Как справочник** — используйте раздел **[Индекс решений](#индекс-решений)** для быстрого поиска нужного алгоритма
- **Для обучения** — смотрите код решений и тесты, чтобы понять подход
- **Для практики** — попробуйте решить задачу сами, прежде чем смотреть решение
- **Для улучшения** — если у вас есть лучшее решение, создайте Pull Request

## Лицензия

MIT License — см. файл [LICENSE](LICENSE)

## Автор

**Дмитрий Казначеев**

- GitHub: [Dmitriy-Kaznacheev](https://github.com/Dmitriy-Kaznacheev)

## Поддержка проекта

Если этот проект помог вам в изучении C++, поставьте звезду на GitHub — это мотивирует продолжать!

[![GitHub stars](https://img.shields.io/github/stars/Dmitriy-Kaznacheev/modern-cpp-challenge-solutions?style=social)](https://github.com/Dmitriy-Kaznacheev/modern-cpp-challenge-solutions)

## Благодарности

- **Мариусу Бансила** за книгу "The Modern C++ Challenge"
- **GoogleTest** за фреймворк для тестирования
- **Сообществу C++** за вдохновение

---

<div align="center">

**Спасибо, что заглянули!** 🚀

</div>