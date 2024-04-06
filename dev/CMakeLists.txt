project(dev)
add_compile_options(-Wall -Wextra -pedantic -Werror -g)

add_executable(app mainDev.cc)
target_link_libraries(app logic)
