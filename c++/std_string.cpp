#include <iostream>
#include <string>
using namespace std;

/* Using std::string */
int main() {
    string str1 = "Hello";
    cout << str1 << endl; //Output: Hello

    string str2;
    /* Copy str1 */
    str2 = str1;
    cout << str2 << endl; //Output: Hello

    /* Unite string */
    str2 = str1 + ", World!";
    cout << str2 << endl; //Output: Hello, World!

    /* Unite string ver2 */
    str2 = "ABC " + str1;
    cout << str2 << endl; //Output: ABC Hello

    /* Unite string ver3 */
    cout << (str1 + str2) << endl; //Output: HelloABC Hello

    /* Error */
    //cout << ("Hello, " + "World!") << endl;
}