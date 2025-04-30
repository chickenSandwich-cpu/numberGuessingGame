#include <iostream>
#include "PlayGame.h"

int main()
{
    char playAgain;

    do {
        PlayGame game;
        game.startGame();
        std::cout << "Do you want to play again? (y/n) "; std::cin >> playAgain;

        playAgain = std::tolower(playAgain);
    } while (playAgain == 'y');

    std::cout << "Thanks for playing!\n";
    return 0;
}
