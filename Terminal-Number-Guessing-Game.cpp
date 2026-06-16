#include <iostream>
#include <ctime>

int main() {
    srand(time(NULL));
    int numb = rand() % 100 + 1;
    int tries = 0;
    int guess;
    
    
    std::cout << "**************NUMBER GUESSING GAME**************" << std::endl;
    while (true)
    {
        std::cout << "Enter a number(1-100): ";
        std::cin >> guess;

        if (guess == numb)
        {
            std::cout << "You won!" << std::endl;
            std::cout << "completed in: " << tries;
            return false;
        }  
        else
        {
            if (guess > numb)
            {
                std::cout << "Too high!" << std::endl;
                tries ++;
            }
            else if (guess < numb)
            {
                std::cout << "Too low!" << std::endl;
                tries ++;
            }
        }
    }
    

    return 0;
}