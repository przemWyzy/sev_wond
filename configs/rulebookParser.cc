//configs/rulebookParser.cc
#pragma once

#include "rulebookParser.h"

#include <string>

RulebookParser::RulebookParser(const std::string& rulesPath) {
  this->rules = YAML::LoadFile(rulesPath);
}

std::uint32_t RulebookParser::getMaxPlayers() {
  std::uint32_t maxPlayers = this->rules["game"]["maxPlayers"].as<uint32_t>();

  return maxPlayers;
}
