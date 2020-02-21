#include <iostream>

void mySwap(int& a, int& b) {
    int tmp = a;
    a = b;
    b = tmp;
}

/* 関数のオーバーロード */
void mySwap(double& a, double& b) {
    double tmp = a;
    a = b;
    b = tmp;
}

/* mySwapは引数に応じて適切なものが選択される */
int main() {
    int a = 1;
    int b = 2;

    /* mySwap(int& a, int& b)が使われる */
    mySwap(a, b);
    std::cout << a << std::endl;
    std::cout << b << std::endl;

    double x = 1.23;
    double y = 4.56;
    /* mySwap(double& a, double& b)が使われる */
    mySwap(x, y);
    std::cout << x << std::endl;
    std::cout << y << std::endl;
}