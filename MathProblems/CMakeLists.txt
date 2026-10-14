file(GLOB SOURCES "src/*.cpp")
file(GLOB HEADERS "include/*.h")

add_library(MathProblems STATIC ${SOURCES} ${HEADERS})

target_include_directories(MathProblems
  PUBLIC
  ${CMAKE_CURRENT_SOURCE_DIR}/include
)

set_target_properties(MathProblems PROPERTIES
  FOLDER "MathProblems"
)
