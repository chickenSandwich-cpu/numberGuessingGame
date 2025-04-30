#pragma once
#include <iostream>
#include <cstdlib> //for rand() and srand()
#include <ctime> //for time(0)

class PlayGame
{
public:
    void startGame()
    {
        srand(time(0));  
        randomNumber = rand() % 100 + 1; 

        attempt = 0;

        std::cout << "Can you guess what is the number? (1-100) "; std::cin >> userNumber;
        while (userNumber != randomNumber)
        {
            std::cin >> userNumber; attempt++;
            if (userNumber < randomNumber)
            {
                std::cout << "Too low, try again! ";
            }
            else if (userNumber > randomNumber)
            {
                std::cout << "Too high, try again! ";
            }
            else
            {
                std::cout << "Correct!! " << userNumber << " is the number!! You guessed it in " << attempt << " attempts!! ";
            }
        }
    }

private:
    int randomNumber = rand() % 100;
    int userNumber;
    int attempt = 0;
};