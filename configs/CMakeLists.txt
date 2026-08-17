find_package(yaml-cpp CONFIG REQUIRED)

add_library(configs
    rulebookParser.cc
)

target_include_directories(configs
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}
)

target_link_libraries(configs
    PUBLIC
        yaml-cpp::yaml-cpp
)
