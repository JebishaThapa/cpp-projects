#include <iostream>
#include <string>

int main(){
    std::string w{};
    std::cin >> w;
    int len{static_cast<int>(w.length())};
    
    int arr[26]{};
    int count{-1};


    for(char c : w){
        arr[c - 'a']++;

    }

    for (int i=0; i<len; i++){
        if (arr[w[i] - 'a'] == 1){
            count = i +1;
            break;
        }
    }

    std::cout << count;
    return 0;
}