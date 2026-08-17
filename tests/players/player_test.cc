// tests/players/player_test.cc

#include "player.h"

#include <catch2/catch_test_macros.hpp>

TEST_CASE("Player remembers his name", "[player]") {
  std::string playerName = "Robert Kubica";
  Player player = Player(playerName);

  REQUIRE(player.getName() == playerName);
}
