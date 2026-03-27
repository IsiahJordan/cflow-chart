project(dependency)

set(SDL2_LOCAL_DIR "${CMAKE_CURRENT_SOURCE_DIR}/SDL2")

if(EXISTS "${SDL2_LOCAL_DIR}/CMakeLists.txt")
  message(STATUS "Using local SDL2 from ${SDL2_LOCAL_DIR}")
  add_subdirectory(${SDL2_LOCAL_DIR})
else()
  message(STATUS "Local SDL2 not found, installing dependency")
  include(FetchContent)
  FetchContent_Declare(
    SDL2
    GIT_REPOSITORY https://github.com/libsdl-org/SDL.git
    GIT_TAG release-3.4.2
  )
  FetchContent_MakeAvailable(SDL2)
endif()
