// apps/devGame.cc

#include <game.h>
#include <player.h>
#include <rulebookParser.h>

#include <iostream>
#include <memory>

int main() {
  Game game = Game();

  Player player1 = Player("Robert Kubica");
  Player player2 = Player("Marius Pudzianowski");
  Player player3 = Player("Maria Skłodowska-Curie");

  game.registerPlayer(std::make_shared<Player>(player1));
  game.registerPlayer(std::make_shared<Player>(player2));
  std::cout << "Player count: " << game.getPlayerCount() << std::endl;
  game.registerPlayer(std::make_shared<Player>(player3));
  std::cout << "Player count: " << game.getPlayerCount() << std::endl;

  RulebookParser rulebookParser = RulebookParser("configs/rulebooks/original_game_rulebook.yaml");
  std::cout << "Max players: " << rulebookParser.getMaxPlayers() << std::endl;

  return 0;
}
