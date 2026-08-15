// src/entities/game.h
#pragma once

#include <memory>
#include <vector>

class Player;

class Game {
 private:
  std::uint32_t age_;
  std::uint32_t round_;
  std::vector<std::shared_ptr<Player>> playes_;

 public:
  Game();

  std::shared_ptr<Player> getPlayer(std::uint32_t playerId) const;
  std::uint32_t getPlayerCount() const;

  std::uint32_t registerPlayer(std::shared_ptr<Player> player);
  void initGame();
  void finishRound();
  void finishAge();
  void summarizeGame();
};
