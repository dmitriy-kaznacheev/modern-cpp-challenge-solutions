# Собираем все файлы из src
file(GLOB SOURCES "src/*.cpp")
file(GLOB HEADERS "include/*.h")

# Создаем статическую библиотеку
add_library(DesignPatterns STATIC ${SOURCES} ${HEADERS})

# Указываем пути для include
target_include_directories(DesignPatterns
  PUBLIC
  ${CMAKE_CURRENT_SOURCE_DIR}/include
)

# Указываем, что это часть проекта
set_target_properties(DesignPatterns PROPERTIES
  FOLDER "DesignPatterns"
)
