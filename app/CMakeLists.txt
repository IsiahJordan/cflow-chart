project(app)

add_executable(${PROJECT_NAME}
  src/app.c
)

target_link_libraries(${PROJECT_NAME}
  lib::gui
)

target_include_directories(${PROJECT_NAME}
  PUBLIC ${PROJECT_SOURCE_DIR}/include
)
