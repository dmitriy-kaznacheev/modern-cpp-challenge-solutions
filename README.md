# 🚀 Современный C++: Решение задач

[![C++](https://img.shields.io/badge/C++-17-blue.svg)](https://en.cppreference.com/w/cpp/17)
[![CMake](https://img.shields.io/badge/CMake-3.24+-green.svg)](https://cmake.org/)
[![GoogleTest](https://img.shields.io/badge/GoogleTest-1.10+-red.svg)](https://github.com/google/googletest)
[![Progress](https://img.shields.io/badge/Прогресс-0%25-orange.svg)](INDEX.md)

> Мои решения задач из книги **"The Modern C++ Challenge"** Мариуса Бансила

## Цель проекта

Этот репозиторий создан для:
- **Практики** современного C++ (C++17/20)
- **Закрепления** знаний алгоритмов и паттернов проектирования
- **Создания личного справочника** решений на будущее
- **Демонстрации** навыков написания чистого кода с тестами

## Структура

Репозиторий организован по тематическим разделам, соответствующим главам книги:

| Раздел | Описание | Задач | Решено | Прогресс |
|--------|----------|-------|--------|----------|
| [MathProblems](MathProblems/) | Математические задачи | 14 | 0 | ░░░░░░░░░░ 0% |
| [LanguageFeatures](LanguageFeatures/) | Особенности языка C++ | 8 | 0 | ░░░░░░░░░░ 0% |
| [StringsRegex](StringsRegex/) | Строки и регулярные выражения | 9 | 0 | ░░░░░░░░░░ 0% |
| [StreamsFilesystem](StreamsFilesystem/) | Потоки и файловая система | 7 | 0 | ░░░░░░░░░░ 0% |
| [DateTime](DateTime/) | Дата и время | 6 | 0 | ░░░░░░░░░░ 0% |
| [AlgorithmsDataStructures](AlgorithmsDataStructures/) | Алгоритмы и структуры данных | 16 | 0 | ░░░░░░░░░░ 0% |
| [Concurrency](Concurrency/) | Многопоточность | 6 | 0 | ░░░░░░░░░░ 0% |
| [DesignPatterns](DesignPatterns/) | Паттерны проектирования | 6 | 0 | ░░░░░░░░░░ 0% |
| [Serialization](Serialization/) | Сериализация данных | 6 | 0 | ░░░░░░░░░░ 0% |
| [ArchivesImagesDatabases](ArchivesImagesDatabases/) | Архивы, изображения, БД | 9 | 0 | ░░░░░░░░░░ 0% |
| [Cryptography](Cryptography/) | Криптография | 7 | 0 | ░░░░░░░░░░ 0% |
| [NetworkingServices](NetworkingServices/) | Сеть и веб-сервисы | 6 | 0 | ░░░░░░░░░░ 0% |
| **Всего** | | **100** | **0** | ░░░░░░░░░░ 0% |

**Общий прогресс:** 0 из 100 задач ✅

## 🛠️ Сборка и тестирование

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
- **Как справочник** — используйте INDEX.md для быстрого поиска нужного алгоритма
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