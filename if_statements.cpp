#include <iostream>

int main(){

    // if statements = do something if a condition is TRUE! IF IT'S NOT IT WILL NOT DO IT!

    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

    if (age >= 18)
    {
        std::cout << "Welcome to the Club!";
    }
    else if(age < 18) {
        std::cout << "Sorry you are not old enough!";
    }
    

    return 0; //Returns 0 if its not working!
}