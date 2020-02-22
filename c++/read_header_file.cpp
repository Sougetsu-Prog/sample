#include "header_file.hpp"    //Read header file
#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int b = 10;
    mySwap(a, b);
    
    double x = 3.6;
    double y = 7.2;
    mySwap(x, y);
    cout << a << " " << b << endl;
    cout << x << " " << y << endl;
}