file(GLOB SOURCES "src/*.cpp")
file(GLOB HEADERS "include/*.h")

add_library(AlgorithmsDataStructures STATIC ${SOURCES} ${HEADERS})

target_include_directories(AlgorithmsDataStructures
  PUBLIC
  ${CMAKE_CURRENT_SOURCE_DIR}/include
)

set_target_properties(AlgorithmsDataStructures PROPERTIES
  FOLDER "AlgorithmsDataStructures"
)
