#include <iostream>
#include <string>

int main(){
    std::string word;
    std::cin >> word;
    std::string vow = "aeiou";
    int count{};

    for (char c : word){
        if (vow.find(c) != std::string::npos) count++;
    }

    std::cout << count << std::endl;

    return 0;

}