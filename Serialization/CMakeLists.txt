# Собираем все файлы из src
file(GLOB SOURCES "src/*.cpp")
file(GLOB HEADERS "include/*.h")

# Создаем статическую библиотеку
add_library(Serialization STATIC ${SOURCES} ${HEADERS})

# Указываем пути для include
target_include_directories(Serialization
  PUBLIC
  ${CMAKE_CURRENT_SOURCE_DIR}/include
)

# Указываем, что это часть проекта
set_target_properties(Serialization PROPERTIES
  FOLDER "Serialization"
)
