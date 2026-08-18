// src/entities/gameEntitiesFactory.h
#pragma once

#include "deck.h"
#include "town.h"

#include <vector>

class GameEntitiesFactory {
 private:
  Card createCard() const;

 public:
  GameEntitiesFactory();

  Deck createDeck(std::uint32_t playersCount) const;
  std::vector<Town> createTowns(std::uint32_t playersCount) const;
};
