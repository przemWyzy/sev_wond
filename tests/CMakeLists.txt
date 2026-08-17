find_package(Catch2 CONFIG REQUIRED)

add_executable(unit_tests entities/game_test.cc players/player_test.cc)

target_link_libraries(unit_tests
    PRIVATE
        Catch2::Catch2WithMain
        entities
        players
)

include(CTest)
include(Catch)

catch_discover_tests(unit_tests)
