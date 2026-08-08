// logic/game.cc

#include "game.h"
#include "player.h"
#include "card.h"

Game::Game(std::uint8_t playerCnt) {
    this->playerCnt = playerCnt;
}

std::uint8_t Game::getPlayerCount() const {
    return this->playerCnt;
}
