project(library)

find_package(SDL2 REQUIRED)
add_library(lib::gui ALIAS ${PROJECT_NAME})
include_directories(${PROJECT_NAME} ${SDL2_INCLUDE_DIRS})

target_include_directories(${PROJECT_NAME} 
  PUBLIC ${PROJECT_SOURCE_DIR}/include
)
target_link_libraries(${PROJECT_NAME}
  ${SDL2_LIBRARIES}
)
