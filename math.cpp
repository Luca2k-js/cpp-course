#include <iostream>

int main(){

    double x = 4;
    double y = 5;
    double z;

    z = std::max(x, y);
    // z = std::min(x, y);

    std::cout << z;

    return 0;
}