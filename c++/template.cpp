#include <iostream>
#include <string>

/* Use function template */
template <typename T>
void mySwap(T& x, T& y) {
    T tmp = x;
    x = y;
    y = tmp;
}

int main() {
    int a = 1;
    int b = 2;
    mySwap(a, b);                //Use mySwap(int& x, int& y)
    std::cout << a << std::endl; //Output value: 2
    std::cout << b << std::endl; //Output value: 1

    double x = 1.23;
    double y = 4.56;
    mySwap(x, y);                //Use mySwap(double& x, double& y)
    std::cout << x << std::endl; //Output value: 4.56
    std::cout << y << std::endl; //Output value: 1.23

    std::string s = "abc";
    std::string t = "xyz";
    mySwap(s, t);                //Use mySwap(string& x, string& y)
    std::cout << s << std::endl; //Output value: xyz
    std::cout << t << std::endl; //Output value: abc
}