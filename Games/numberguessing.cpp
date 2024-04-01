#include <iostream>

int main() {

    int num;
    int guess;
    int tries;

    srand(time(NULL));
    num = (rand() % 100) + 1; 

    std::cout << "**** GUESS THE NUMBER ****\n";

    do
    {
        std::cout << "Enter a number between 1-100: ";
        std::cin >> guess;
        tries++;

        if (guess > num)
        {
            std::cout << "The number is too High! Try again!" << '\n';
        }
        else if (guess < num)
        {
            std::cout << "The number is too low! Try again!" << '\n';
        }
        else{
            std::cout << "CORRECT! ** NUMBER OF TRIES: " << tries << '\n';
        }
        

    } while (guess != num);
    
   std::cout << "**** GUESS THE NUMBER ****\n";

    return 0;
}