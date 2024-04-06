// logic/resources.h

#ifndef LOGIC_LIBS_RESOURCES_H
#define LOGIC_LIBS_RESOURCES_H

#include "vector"
#include "string"

using namespace std;

class Resources {
  private:
    short money;
    short wood;
    short stones;
    short bricks;
    short ores;
    short papyrus;
    short glass;
    short silk;
  public:
    Resources(short money, short wood, short stones, short bricks, short ores, short papyrus, short glass, short silk);
    Resources(vector<short> initResources);
    Resources(short initResources[]);
    short getMoney();
    short getWood();
    short getStones();
    short getBricks();
    short getOres();
    short getPapyrus();
    short getGlass();
    short getSilk();
    void addMoney(short money);
    void spendMoney(short money);
    short addWood(short wood);
    short addStones(short stones);
    short addBricks(short bricks);
    short addOres(short ores);
    short addPapyrus(short papyrus);
    short addGlass(short glass);
    short addSilk(short silk);
};

#endif /* LOGIC_LIBS_RESOURCES_H */
