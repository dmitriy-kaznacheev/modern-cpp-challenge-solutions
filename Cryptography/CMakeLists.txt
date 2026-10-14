file(GLOB SOURCES "src/*.cpp")
file(GLOB HEADERS "include/*.h")

add_library(Cryptography STATIC ${SOURCES} ${HEADERS})

target_include_directories(Cryptography
  PUBLIC
  ${CMAKE_CURRENT_SOURCE_DIR}/include
)

set_target_properties(Cryptography PROPERTIES
  FOLDER "Cryptography"
)
