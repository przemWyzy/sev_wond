// src/players/player.cc

#include "player.h"

#include <iostream>

Player::Player(std::string name) {
  this->name = name;
}

void Player::makeMove() const {
  std::cout << "Player: " << this->name << " made mocked move." << std::endl;
}

std::string Player::getName() const {
  return this->name;
}
