#include <iostream>
    
// namespace fisrtProgram{
//     int x = 1;
// }    

// namespace secondProgram{
//     int x = 5;
// }

int main() {
    using namespace std;

    std::string name = "Luca";

    cout << "Hello " << name << '\n'; // you can also use std::cout, but this saves a bit of time

    // Those std::cout are for the namespaces that you can create, but you can also use std(standart)

    // std::cout << fisrtProgram::x << "\n";
    // std::cout << secondProgram::x;

    return 0;
}