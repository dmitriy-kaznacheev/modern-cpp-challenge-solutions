file(GLOB SOURCES "src/*.cpp")
file(GLOB HEADERS "include/*.h")

add_library(DesignPatterns STATIC ${SOURCES} ${HEADERS})

target_include_directories(DesignPatterns
  PUBLIC
  ${CMAKE_CURRENT_SOURCE_DIR}/include
)

set_target_properties(DesignPatterns PROPERTIES
  FOLDER "DesignPatterns"
)
