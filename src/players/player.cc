// src/players/player.cc

#include "player.h"

#include <iostream>

Player::Player(std::string name) {
  this->name = name;
}

std::string Player::getName() const {
  return this->name;
}
