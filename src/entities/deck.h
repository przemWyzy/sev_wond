// src/entities/deck.h
#pragma once

#include "card.h"

#include <vector>
#include <map>
#include <memory>

class Deck {
private:
  std::vector<Card> allCards

  std::vector<std::shared_ptr<Card>> discard;
  std::map<std::uint32_t, std::map<std::uint32_t, std::shared_ptr<Card>>> preparedHands;
public:
  Deck();

  std::vector<std::shared_ptr<Card>> getPlayerHand(std::uint32_t playerId, std::uint32_t age) const;
  std::vector<std::shared_ptr<Card>> getDiscardedCards() const;
};
