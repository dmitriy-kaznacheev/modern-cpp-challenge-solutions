file(GLOB SOURCES "src/*.cpp")
file(GLOB HEADERS "include/*.h")

add_library(LanguageFeatures STATIC ${SOURCES} ${HEADERS})

target_include_directories(LanguageFeatures
  PUBLIC
  ${CMAKE_CURRENT_SOURCE_DIR}/include
)

set_target_properties(LanguageFeatures PROPERTIES
  FOLDER "LanguageFeatures"
)
