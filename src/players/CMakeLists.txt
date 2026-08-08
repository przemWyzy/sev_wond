add_library(players
    player.cc
)

target_include_directories(players
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}
)
