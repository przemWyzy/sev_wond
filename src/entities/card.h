// src/entities/card.h
#pragma once

#include "entityEffect.h"

#include <memory>
#include <vector>
#include <map>
#include <string>

class Card {
private:
  std::string name;
  std::uint32_t age;
  std::string type;
  std::vector<effects::EntityEffect> effects;
  std::map<effects::Resource, std::uint32_t> cost;
  std::vector<std::shared_ptr<Card>> parents;
  std::vector<std::shared_ptr<Card>> children;
  std::uint32_t frequency;

public:
  Card();

  std::map<effects::Resource, std::uint32_t> getStableResources() const;
  std::vector<std::map<effects::Resource, std::uint32_t>> getSplitResources() const;
  std::uint32_t getCoins() const;
  std::uint32_t getVictoryPoints() const;
  std::uint32_t getWarPoints() const;
  std::pair<effects::Discount, effects::Direction> getDiscount() const;
  std::map<effects::ScienceType, std::uint32_t> getStableScience() const;
  std::vector<std::map<effects::ScienceType, std::uint32_t>> getSplitScience() const;
};
