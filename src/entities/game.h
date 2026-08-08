// logic/game.h
#pragma once

#include <memory>
#include <vector>

class Player;

class Game {
private:
    std::uint8_t age;
    std::uint8_t round;
    std::uint8_t playerCnt;

    void initDecks();
public:
    Game(std::uint8_t playerCnt);

    std::uint8_t getPlayerCount() const;

    void registerPlayer(std::shared_ptr<Player>);
    void initGame();
    void finishRound();
    void finishAge();
    void summarizeGame();
};
