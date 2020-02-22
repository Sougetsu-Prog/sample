#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v{2, 3, 5, 7};

    /* Use enhanced for loop */
    for(auto x : v) cout << x << ", ";
    cout << endl;

    /* Increment elements in vector for each */
    for(auto& x : v) ++x;
    for(auto x : v) cout << x << ", ";
    cout << endl;
}