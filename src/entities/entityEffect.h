// src/entities/entityEffect.h
#pragma once

#include <vector>
#include <set>
#include <map>

namespace effects {

enum class EntityEffectType {
  Resources,
  SplitResources,
  NeighborVictoryPionts,
  NeighborCoins,
  VictoryPionts,
  Coins,
  WarPoints,
  CheaperResources,
  Science
};

enum class Resource {
  Money, Wood, Stone, Clay, Ore, Papyrus, Glass, Loom
};

enum class Discount {
  CheaperMaterials, CheaperResources
};

enum class ScienceType {
  Gear, Sextant, Slate
};

enum class Direction {
  Left, Self, Right
};

enum class NeighborEffectType {
	Coins, VictoryPoints
};

enum class NeighborEffectSource {
	BrownCards, GreyCards, YellowCards, GreenCards, RedCards, WarDefeatPoints, PurpleCards, BlueCards, WonderStages
};

enum class Ability {
  LastCardOfAge, FreeBuildingInAge, BuildDiscardedBuilding, CopyGuild
};

class EntityEffect {
private:
  EntityEffectType effectType;

public:
  virtual std::map<Resource, std::uint32_t> getStableResources() const;
  virtual std::vector<std::map<Resource, std::uint32_t>> getSplitResources() const;
  virtual std::uint32_t getCoins() const;
  virtual std::uint32_t getVictoryPoints() const;
  virtual std::uint32_t getWarPoints() const;
  virtual std::pair<Discount, Direction> getDiscount() const;
  virtual std::map<ScienceType, std::uint32_t> getStableScience() const;
  virtual std::vector<std::map<ScienceType, std::uint32_t>> getSplitScience() const;

  EntityEffect getEffectType() const;
};

class ResourceEffect : EntityEffect {
private:
  std::map<Resource, std::uint32_t> stableResources;
  std::vector<std::map<Resource, std::uint32_t>> splitResources;

public:
  ResourceEffect(const std::map<Resource, std::uint32_t>& initStableResources);
  ResourceEffect(const std::vector<std::map<Resource, std::uint32_t>>& initSplitResources);

  void addStableResources(const std::map<Resource, std::uint32_t>& stableResources);
  void addSplitResources(const std::vector<std::map<Resource, std::uint32_t>>& splitResources);
  std::map<Resource, std::uint32_t> getStableResources() const;
  std::vector<std::map<Resource, std::uint32_t>> getSplitResources() const;
};

class ScienceEffect : EntityEffect {
private:
  std::map<ScienceType, std::uint32_t> stableScience;
  std::vector<std::map<ScienceType, std::uint32_t>> splitScience;

public:
  ScienceEffect(const std::map<ScienceType, std::uint32_t>& initStableScience);
  ScienceEffect(const std::vector<std::map<ScienceType, std::uint32_t>>& initSplitScience);

  void addStableScience(const std::map<ScienceType, std::uint32_t>& stableScience);
  void addSplitScience(const std::vector<std::map<ScienceType, std::uint32_t>>& splitScience);
  std::map<ScienceType, std::uint32_t> getStableScience() const;
  std::vector<std::map<ScienceType, std::uint32_t>> getSplitScience() const;
};

class VictoryPointsEffect : EntityEffect {
private:
  std::uint32_t victoryPoints;

public:
  VictoryPointsEffect(std::uint32_t victoryPoints);

  std::uint32_t getVictoryPoints() const;
};

class WarPointsEffect : EntityEffect {
private:
  std::uint32_t warPoints;

public:
  WarPointsEffect(std::uint32_t warPoints);

  std::uint32_t getWarPoints() const;
};

class CoinsEffect : EntityEffect {
private:
  std::uint32_t coins;

public:
  CoinsEffect(std::uint32_t coins);

  std::uint32_t getCoins() const;
};

class NeighborEffect : EntityEffect {
private:
	NeighborEffectType neighborEffect;
	std::vector<Direction> directions;
	std::vector<NeighborEffectSource> sources;
	std::uint32_t effectValue;

public:
	NeighborEffect(
		NeighborEffectType neighborEffect,
		std::vector<Direction> directions,
		std::vector<NeighborEffectSource> sources,
		std::uint32_t effectValue
	);

  std::uint32_t getCoins() const;
  std::uint32_t getVictoryPoints() const;
};

class DiscountEffect : EntityEffect {
private:
  Discount discount;
  Direction direction;

public:
  DiscountEffect(Discount discount, Direction direction);

  std::pair<Discount, Direction> getDiscount() const;
};

class AbilityEffect : EntityEffect {
private:
  Ability ability;
  bool isAvaliable;

public:
  AbilityEffect(Ability ability);

  Ability getAbility() const;
  void useAbility();
  void restoreAbility();
};

} // effects
