#include <iostream>
#include <string>

int main(){
    std::string w{};
    std::cin >> w;

    int len{static_cast<int>(w.length())};

    int store[26]{};

    for (char c : w){
        store[c - 'a']++;
    }
    for(int i=0; i<26; i++){
        std::cout << store[i] << " ";
    }

   return 0;
}    