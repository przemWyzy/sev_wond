// src/players/player.h
#pragma once

#include <string>

class Player {
 private:
  std::string name;

 public:
  Player(std::string name);
  void makeMove() const;
};
