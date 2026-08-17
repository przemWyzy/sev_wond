cmake_minimum_required(VERSION 3.15)
project(
    SevWond
    VERSION 0.1.1
)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

if(MSVC)
    # for windows
    add_compile_options(/W4)
else()
    # for ubuntu
    add_compile_options(-Wall -Wextra -pedantic -Werror -g)
endif()


add_subdirectory(apps)
add_subdirectory(configs)
add_subdirectory(src)

include_directories(src)

set_target_properties(devGame PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin
)
