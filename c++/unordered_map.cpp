#include <iostream>
#include <string>
#include <unordered_map>

int main() {
    std::unordered_map<std::string, int> dictionary {{"one", 0}, {"two", 2}, {"three", 3}};
    std::cout << dictionary["two"] << std::endl;

    dictionary["one"] = 1;
    std::cout << dictionary["four"] << std::endl; //出力値0

    //検索するだけなら要素は登録されない
    if (dictionary.find("five") == dictionary.end()) std::cout << "not found\n";

    dictionary["six"] = 6;

    for(const auto& p : dictionary) {
        std::cout << p.first << ", " << p.second << std::endl;
    }
}