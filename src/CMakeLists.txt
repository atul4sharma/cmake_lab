cmake_minimum_required(VERSION 3.5)
project(lab)

add_compile_options(-Wall -Wextra -Wpedantic)

add_executable(lab main.cpp)

target_compile_features(lab PRIVATE cxx_lambda_init_captures)

install(TARGETS lab DESTINATION bin)
