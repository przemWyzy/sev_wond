// dev/mainDev.cc

#include <game.h>
#include <iostream>

int main() {
    Game game = Game(4);
    std::cout << game.getPlayerCount() << std::endl;
    return 0;
}
