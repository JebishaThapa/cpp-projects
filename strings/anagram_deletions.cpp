#include <iostream>
#include <string>

int main(){

    std::string w{}, s{};
    
    int integer{};

    std::cin >> w >> s >>  integer;

    int len{static_cast<int>(w.length())};
    int len1(static_cast<int>(s.length()));

    int arrW[26]{};
    int arrS[26]{};


    for (char c: w){
        arrW[c - 'a']++;
    }

    for (char c: s){
        arrS[c - 'a']++;
    }

    //see between two if the frequency and length of character same we delete the rest diff btween first word and second word

    return 0;
}