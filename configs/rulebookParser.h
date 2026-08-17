//configs/rulebookParser.h
#pragma once

#include <yaml-cpp/yaml.h>
#include <string>

class RulebookParser {
 private:
  YAML::Node rules;

 public:
  RulebookParser(const std::string& rulesPath);

  std::uint32_t getMaxPlayers();
};
