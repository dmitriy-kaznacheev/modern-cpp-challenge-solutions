#!/bin/bash
set -e

echo "Проверка форматирования..."
find . -name "*.cpp" -o -name "*.h" | xargs clang-format --dry-run --Werror

echo "Сборка проекта..."
mkdir -p build
cd build
cmake .. -DBUILD_TESTS=ON
cmake --build .

echo "Запуск тестов..."
ctest --output-on-failure

echo "Все проверки пройдены успешно!"
