// src/entities/card.h
#pragma once

#include "entityEffect.h"

#include <map>
#include <memory>
#include <string>
#include <vector>

class Card {
 private:
  std::string name_;
  std::uint32_t age_;
  effects::CardType type_;
  std::vector<effects::EntityEffect> effects_;
  std::map<effects::Resource, std::uint32_t> cost_;
  std::vector<std::shared_ptr<Card>> parents_;
  std::vector<std::shared_ptr<Card>> children_;
  std::uint32_t frequency_;

 public:
  Card();

  void addEffect(effects::EntityEffect newEffect);
  void addParent(std::shared_ptr<Card> newParent);
  void addChild(std::shared_ptr<Card> newChild);

  std::string getName() const;
  std::uint32_t getAge() const;
  effects::CardType getType() const;
  std::map<effects::Resource, std::uint32_t> getCost() const;
  std::vector<std::shared_ptr<Card>> getParents() const;
  std::vector<std::shared_ptr<Card>> getChildren() const;
  std::uint32_t getFrequency() const;

  std::string getEffectsSummary() const;
  bool hasParent(std::shared_ptr<Card> targetedCard) const;
  bool hasChild(std::shared_ptr<Card> targetedCard) const;

  std::map<effects::Resource, std::uint32_t> getStableResources() const;
  std::vector<std::map<effects::Resource, std::uint32_t>> getSplitResources() const;
  std::uint32_t getCoins() const;
  std::uint32_t getVictoryPoints() const;
  std::uint32_t getWarPoints() const;
  std::pair<effects::Discount, effects::Direction> getDiscount() const;
  std::map<effects::ScienceType, std::uint32_t> getStableScience() const;
  std::vector<std::map<effects::ScienceType, std::uint32_t>> getSplitScience() const;
};
