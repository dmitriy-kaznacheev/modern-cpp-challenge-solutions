# Подключаем GoogleTest через FetchContent
include(FetchContent)

FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)

# Для Windows: предотвращаем переопределение настроек компилятора
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

FetchContent_MakeAvailable(googletest)

# Создаем исполняемый файл для тестов
add_executable(challenge_tests
  main.cpp
  MathProblems/problem_001_sum_multiples_test.cpp
)

# Линкуем с библиотеками GoogleTest
target_link_libraries(challenge_tests
  PRIVATE
  gtest_main
  MathProblems
  LanguageFeatures
  StringsRegex
  StreamsFilesystem
  DateTime
  AlgorithmsDataStructures
  Concurrency
  DesignPatterns
  Serialization
  ArchivesImagesDatabases
  Cryptography
  NetworkingServices
)

# Включаем автоматическое обнаружение тестов
include(GoogleTest)
gtest_discover_tests(challenge_tests)
