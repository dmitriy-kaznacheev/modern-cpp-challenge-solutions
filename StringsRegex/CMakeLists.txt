file(GLOB SOURCES "src/*.cpp")
file(GLOB HEADERS "include/*.h")

add_library(StringsRegex STATIC ${SOURCES} ${HEADERS})

target_include_directories(StringsRegex
  PUBLIC
  ${CMAKE_CURRENT_SOURCE_DIR}/include
)

set_target_properties(StringsRegex PROPERTIES
  FOLDER "StringsRegex"
)
