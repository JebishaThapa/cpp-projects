#include <iostream>
#include <string>
#include <cctype>

int main(){
    std::string w{};
    std::cin >> w;

    int count{};

    for (char c : w){
        if(!std::isalpha(c)){
            count += c - 48;
        }
    }
    std::cout << count;

    return 0;
}