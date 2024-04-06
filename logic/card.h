// logic/card.h

#ifndef LOGIC_LIBS_CARD_H
#define LOGIC_LIBS_CARD_H

#include "resources.h"
#include "vector"
#include "string"

using namespace std;

class Card {
  private:
    short id;
    short epoch;
    string name;
    Resources price;
    short parentCardId;
    string type;
  public:
    Card(int playerCount);
    int getPlayerCount();
};

#endif /* LOGIC_LIBS_CARD_H */
