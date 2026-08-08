// logic/player.h
#pragma once

#include <vector>
#include <string>

using namespace std;

class Player {
  private:
    string name;
    short money;
    vector<short> warScores;
  public:
    Player(int playerCount);
    int getPlayerCount();
};
