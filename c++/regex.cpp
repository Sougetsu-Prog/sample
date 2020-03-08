#include <iostream>
#include <regex>
using namespace std;

int main() {
    /* Use regular expression */
    regex rx(R"(\d{3}-\d{4})");

    /* Check variable zip */
    string zip = "123-4567";
    if(regex_match(zip, rx)) cout << "OK\n";
    else cout << "NG\n";

    zip = "123-45678";
    if(regex_match(zip, rx)) cout << "OsK\n";
    else cout << "NG\n";
}