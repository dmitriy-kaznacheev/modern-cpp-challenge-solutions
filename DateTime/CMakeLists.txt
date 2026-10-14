file(GLOB SOURCES "src/*.cpp")
file(GLOB HEADERS "include/*.h")

add_library(DateTime STATIC ${SOURCES} ${HEADERS})

target_include_directories(DateTime
  PUBLIC
  ${CMAKE_CURRENT_SOURCE_DIR}/include
)

set_target_properties(DateTime PROPERTIES
  FOLDER "DateTime"
)
