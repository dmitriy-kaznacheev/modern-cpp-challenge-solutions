cmake_minimum_required(VERSION 3.24)
project(ModernCppChallenge)

# Настройка C++ стандарта
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Опции сборки
option(BUILD_TESTS "Сборка тестов" ON)

# Подключаем все разделы
add_subdirectory(MathProblems)
add_subdirectory(LanguageFeatures)
add_subdirectory(StringsRegex)
add_subdirectory(StreamsFilesystem)
add_subdirectory(DateTime)
add_subdirectory(AlgorithmsDataStructures)
add_subdirectory(Concurrency)
add_subdirectory(DesignPatterns)
add_subdirectory(Serialization)
add_subdirectory(ArchivesImagesDatabases)
add_subdirectory(Cryptography)
add_subdirectory(NetworkingServices)

# Тесты
if(BUILD_TESTS)
  enable_testing()
  add_subdirectory(tests)
endif()
