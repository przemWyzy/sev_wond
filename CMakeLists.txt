cmake_minimum_required(VERSION 3.15)
project(SevWond VERSION 0.1.0)
set(CMAKE_CXX_STANDARD 17)

if(MSVC)
    # for windows
    add_compile_options(/W4)
else()
    # for ubuntu
    add_compile_options(-Wall -Wextra -pedantic -Werror -g)
endif()

include_directories(logic)

add_subdirectory(dev)
add_subdirectory(logic)

# file(RENAME "./build/dev/mainDev" "./build/mainDev")
