file(GLOB SOURCES "src/*.cpp")
file(GLOB HEADERS "include/*.h")

add_library(NetworkingServices STATIC ${SOURCES} ${HEADERS})

target_include_directories(NetworkingServices
  PUBLIC
  ${CMAKE_CURRENT_SOURCE_DIR}/include
)

set_target_properties(NetworkingServices PROPERTIES
  FOLDER "NetworkingServices"
)
