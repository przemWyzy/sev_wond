add_executable(devGame
    devGame.cc
)

target_link_libraries(devGame
    PRIVATE
        entities
        players
)
