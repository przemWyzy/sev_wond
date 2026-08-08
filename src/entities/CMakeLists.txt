add_library(entities
    game.cc
)

target_include_directories(entities
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}
)
