project(library)

add_library(lib::gui ALIAS ${PROJECT_NAME})

target_include_directories(${PROJECT_NAME} 
  PUBLIC ${PROJECT_SOURCE_DIR}/include
)
