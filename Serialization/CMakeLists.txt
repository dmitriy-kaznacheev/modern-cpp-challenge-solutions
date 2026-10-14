file(GLOB SOURCES "src/*.cpp")
file(GLOB HEADERS "include/*.h")

add_library(Serialization STATIC ${SOURCES} ${HEADERS})

target_include_directories(Serialization
  PUBLIC
  ${CMAKE_CURRENT_SOURCE_DIR}/include
)

set_target_properties(Serialization PROPERTIES
  FOLDER "Serialization"
)
