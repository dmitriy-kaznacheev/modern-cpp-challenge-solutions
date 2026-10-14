file(GLOB SOURCES "src/*.cpp")
file(GLOB HEADERS "include/*.h")

add_library(ArchivesImagesDatabases STATIC ${SOURCES} ${HEADERS})

target_include_directories(ArchivesImagesDatabases
  PUBLIC
  ${CMAKE_CURRENT_SOURCE_DIR}/include
)

set_target_properties(ArchivesImagesDatabases PROPERTIES
  FOLDER "ArchivesImagesDatabases"
)
