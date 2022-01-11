cmake_minimum_required(VERSION 3.0.0)
project(PollEvent VERSION 0.1.0)

include(CTest)
enable_testing()

link_libraries(SDL2)

add_executable(SimpleWindow main.c)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
