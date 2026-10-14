file(GLOB SOURCES "src/*.cpp")
file(GLOB HEADERS "include/*.h")

add_library(StreamsFilesystem STATIC ${SOURCES} ${HEADERS})

target_include_directories(StreamsFilesystem
  PUBLIC
  ${CMAKE_CURRENT_SOURCE_DIR}/include
)

set_target_properties(StreamsFilesystem PROPERTIES
  FOLDER "StreamsFilesystem"
)
