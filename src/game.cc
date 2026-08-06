// logic/game.cc

#include "game.h"

Game::Game(int playerCount) {
    this->playerCount = playerCount;
}

int Game::getPlayerCount() {
    return this->playerCount;
}
