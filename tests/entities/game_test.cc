// tests/entities/game_test.cc

#include "game.h"

#include <catch2/catch_test_macros.hpp>

TEST_CASE("Inited game has no players", "[game]") {
  Game game = Game();

  REQUIRE(game.getPlayerCount() == 0);
}
