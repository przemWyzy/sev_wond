cmake_minimum_required(VERSION 3.15)
project(SevWond VERSION 0.1.0)
set(CMAKE_CXX_STANDARD 17)

add_compile_options(-Wall -Wextra -pedantic -Werror -g)

include_directories(logic)

add_subdirectory(dev)
add_subdirectory(logic)

file(RENAME "./build/dev/app" "./build/app")
