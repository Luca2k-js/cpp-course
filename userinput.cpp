#include <iostream>
    
// cout << (insertion operator)
// cin >> (extraction operator)


int main() {

    // Ask for user name

    std::string name;  
    
    // Ask for user Age

   int age;

    std::cout << "What's your name?: ";
    std::cin >> name;

    // AGE 
    std::cout << "How old are you?: ";
    std::cin >> age;

    std::cout << "Hello " << name << '\n';
    std::cout << "You are " << age << " years old!";     

    return 0;
}