// logic/resources.cc

#include "resources.h"

Resources::Resources(short money, short wood, short stones, short bricks, short ores, short papyrus, short glass, short silk) {
    this->money = money;
    this->wood = wood;
    this->stones = stones;
    this->bricks = bricks;
    this->ores = ores;
    this->papyrus = papyrus;
    this->glass = glass;
    this->silk = silk;
};

Resources::Resources(vector<short> initResources) {
    this->money = initResources[0];
    this->wood = initResources[1];
    this->stones = initResources[2];
    this->bricks = initResources[3];
    this->ores = initResources[4];
    this->papyrus = initResources[5];
    this->glass = initResources[6];
    this->silk = initResources[7];
};

Resources::Resources(short initResources[]) {
    this->money = initResources[0];
    this->wood = initResources[1];
    this->stones = initResources[2];
    this->bricks = initResources[3];
    this->ores = initResources[4];
    this->papyrus = initResources[5];
    this->glass = initResources[6];
    this->silk = initResources[7];
};

short Resources::getMoney() {
    return this->money;
};

short Resources::getWood() {
    return this->wood;
};

short Resources::getStones() {
    return this->stones;
};

short Resources::getBricks() {
    return this->bricks;
};

short Resources::getOres() {
    return this->ores;
};

short Resources::getPapyrus() {
    return this->papyrus;
};

short Resources::getGlass() {
    return this->glass;
};

short Resources::getSilk() {
    return this->silk;
};

void Resources::addMoney(short money) {
    this->money += money;
};

void Resources::spendMoney(short money) {
    this->money -= money;
};

short Resources::addWood(short wood) {
    this->wood += wood;
};

short Resources::addStones(short stones) {
    this->stones += stones;
};

short Resources::addBricks(short bricks) {
    this->bricks += bricks;
};

short Resources::addOres(short ores) {
    this->ores += ores;
};

short Resources::addPapyrus(short papyrus) {
    this->papyrus += papyrus;
};

short Resources::addGlass(short glass) {
    this->glass += glass;
};

short Resources::addSilk(short silk) {
    this->silk += silk;
};
