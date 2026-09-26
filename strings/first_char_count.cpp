#include <iostream>
#include <string>

int main(){
    std::string w{};
    std::cin >> w;

    char firstChar = w[0];
    int count{};

    for(char c : w){
        if (c==firstChar){
            count++;
        }
    }
    std::cout << count;
    return 0;
}