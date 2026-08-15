// logic/game.cc

#include "game.h"
#include "player.h"
#include "card.h"

#include <stdexcept>

Game::Game() {
  this->age_ = 1;
  this->round_ = 1;
}

std::shared_ptr<Player> Game::getPlayer(std::uint32_t playerId) const {
  if (playerId == 0 || this->playes_.size() < playerId) {
    throw std::invalid_argument(
      "Invalid playerId, expected ids between 1 and " + std::to_string(this->playes_.size()) + ", got: " + std::to_string(playerId)
    );
  }
  return this->playes_[playerId];
}

std::uint32_t Game::getPlayerCount() const {
  return static_cast<uint32_t>(this->playes_.size());
}

std::uint32_t Game::registerPlayer(std::shared_ptr<Player> player) {
  this->playes_.push_back(player);
  return static_cast<uint32_t>(this->playes_.size());
}
