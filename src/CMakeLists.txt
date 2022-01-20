cmake_minimum_required(VERSION 3.5)
project(lab)
set (CMAKE_CXX_STANDARD 14)

add_compile_options(-Wall -Wextra -Wpedantic)

add_library(foo foo.cpp)
add_library(bar bar.cpp)
add_library(foobar SHARED foo bar)
add_executable(lab main.cpp)


target_link_libraries(foobar
    PUBLIC foo
    PRIVATE bar)

target_link_libraries(lab PRIVATE foobar)

install(TARGETS lab DESTINATION bin)
