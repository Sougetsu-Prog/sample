#include <iostream>
#include <utility>
#include <tuple>
using namespace std;

int main() {
    /* Use pair */
    auto taro = make_pair("Taro", 32); //pair<string, int> taro("Taro", 32);

    /* Display elements */
    cout << taro.first << endl;
    cout << taro.second << endl;
    
    /* Use tuple */
    auto hanako = make_tuple("Hanako", 1980, 1, 28); //tuple<string, int, int, int>
    
    /* extract elements from tuple and display in order */
    cout << get<0>(hanako) << endl;
    cout << get<1>(hanako) << endl;
    cout << get<2>(hanako) << endl;
    cout << get<3>(hanako) << endl;
}