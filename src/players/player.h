// src/players/player.h
#pragma once

#include <memory>
#include <string>

class Game;

class Player {
 private:
  std::string name;
  std::shared_ptr<Game> assignedGame;

 public:
  Player(std::string name);
  virtual void makeMove() const;
  std::string getName() const;
};
