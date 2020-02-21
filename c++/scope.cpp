#include <iostream>

int x; //Global variable

void f() {
    x = 2;
    int y = 2; //Local variable
    std::cout << "y in f = " << y << std::endl; //Output: y in f = 2;
}

int main() {
    x = 1;
    int y = 1;
    f(); //x's value changed
    std::cout << "x = " << x << std::endl; //Output: x = 2
    std::cout << "y = " << y << std::endl; //Output: y = 1
}