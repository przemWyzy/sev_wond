// src/entities/town.h
#pragma once

#include <vector>
#include <memory>

class Card;

class Town {
private:
  std::vector<std::shared_ptr<Card>> wonderStagesCards;
  std::vector<std::shared_ptr<Card>> builtCards;

  std::vector<std::shared_ptr<Card>> resourceCards;
  std::vector<std::shared_ptr<Card>> vicoryPointsCards;
  std::vector<std::shared_ptr<Card>> warCards;
  std::vector<std::shared_ptr<Card>> scienceCards;
  std::vector<std::shared_ptr<Card>> discountCards;

public:
  Town();
};
