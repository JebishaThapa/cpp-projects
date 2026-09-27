#include <iostream>
#include <string>

int main(){
    std::string w{};
    int k{};
    std::cin >> w >> k;
    int len{static_cast<int>(w.length())};

    int arr[26]{};

    for(char c: w){
        arr[c - 'a']++;
    }

    bool check = false;
    for(char c :w ){
        if(arr[c - 'a']>=k){
            std::cout << c;
            check = true;
            break;
        }

    }
    if(!check) std::cout << "NONE";

    return 0;
}