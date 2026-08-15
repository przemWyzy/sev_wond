// logic/game.h
#pragma once

#include <memory>
#include <vector>

class Player;

class Game {
private:
  std::uint32_t age;
  std::uint32_t round;
  std::uint32_t playerCnt;

public:
  Game(std::uint32_t playerCnt);

  std::uint32_t getPlayerCount() const;

  void registerPlayer(std::shared_ptr<Player>);
  void initGame();
  void finishRound();
  void finishAge();
  void summarizeGame();
};
