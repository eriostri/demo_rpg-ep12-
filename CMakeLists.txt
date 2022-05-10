cmake_minimum_required(VERSION 3.21)
project(demo_rpg)
set(CMAKE_CXX_STANDARD 17)

include_directories(${CMAKE_SOURCE_DIR}/demo_rpg/include)

enable_testing()

add_subdirectory(googletest)
add_subdirectory(tests)

set(Sources demo_rpg/*.cpp)

add_library(demo_rpg ${Sources})