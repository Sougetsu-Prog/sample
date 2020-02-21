#include <iostream>
using namespace std;

int x;

namespace nameA {
    int x = 1;
}

namespace nameB{
    int x = 2;
}

int main() {
    int x = 3;
    cout << x << endl;  //Output: 3 (Local variable)

    /* designate global namespace "::identifier" */
    cout << ::x << endl; //Output: 0 (Global namespace)

    cout << nameA::x << endl; //Output: 1(Namespace nameA)

    cout << nameB::x << endl; //Output: 2(Namespace nameB)
}