// logic/player.h

#ifndef LOGIC_LIBS_PLAYER_H
#define LOGIC_LIBS_PLAYER_H

#include "vector"
#include "string"

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

#endif /* LOGIC_LIBS_PLAYER_H */
