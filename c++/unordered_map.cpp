#include <iostream>
#include <string>
#include <unordered_map>

/* Use unordered_map */
int main() {
    std::unordered_map<std::string, int> dictionary {{"one", 0}, {"two", 2}, {"three", 3}};
    std::cout << dictionary["two"] << std::endl;

    /* Change {"one", 0} 's value 0 to 1 */
    dictionary["one"] = 1;
    /* Add key&value( {"four", 0} ) pair if not exist */
    std::cout << dictionary["four"] << std::endl; //出力値0

    /* Not register elements if only search */
    if (dictionary.find("five") == dictionary.end()) std::cout << "not found\n";

    /* Add a element */
    dictionary["six"] = 6;

    /* Display a map */
    for(const auto& p : dictionary) {
        std::cout << p.first << ", " << p.second << std::endl;
    }
}