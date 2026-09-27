#include <iostream>
#include <string>

int main(){

    std::string s{}, w{};
    std::cin >> s >> w;

    int arrS[26]{};
    int arrW[26]{};

    for (char c : s){
        arrS[c - 'a']++;
    }
    for(char c : w){
        arrW[c - 'a']++;
    }

    for(char c : w){
        if (arrW[c -'a'] > arrS[c - 'a']){
            std::cout << "NO" <<std::endl;
            return 0;
        }
    }
    std::cout << "YES" <<std::endl;


    return 0;
}