#include <iostream>
#include <string>
#include <cctype>

int main(){
    std::string s{};
    std::cin >> s;

    std::string cs{};

    for (char c: s){
        if (std::islower(c)) cs+= std::toupper(c);
        else cs += std::tolower (c);

    }
    std::cout << cs << std::endl;
    return 0;
}