file(GLOB SOURCES "src/*.cpp")
file(GLOB HEADERS "include/*.h")

add_library(Concurrency STATIC ${SOURCES} ${HEADERS})

target_include_directories(Concurrency
  PUBLIC
  ${CMAKE_CURRENT_SOURCE_DIR}/include
)

set_target_properties(Concurrency PROPERTIES
  FOLDER "Concurrency"
)
