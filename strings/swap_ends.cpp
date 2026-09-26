#include <iostream>
#include <string>

int main(){
    std::string w{};
    std::cin >> w;

    int len{static_cast<int>(w.length())};

    for(char &c : w){
        if (c == w[len-1]){
            w[0]=c;
        }
        if (c== w[0]){
            w[len-1]==c;
        }
    }
    std::cout << w;
    return 0;
}