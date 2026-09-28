#include <iostream>

int main() {
    
    std::string w{};
    int in{};
    std::cin >> w >> in;

    int arr[26]{};
    bool check = false;

    for(char c: w){
        arr[c - 'a']++;
    }

    for (int i =0; i < 26; i++){
        if (arr[i] == in){
            std::cout <<  static_cast<char>(i + 'a');
            check = true;
        }
    }

    if(!check) std::cout << "NONE" <<std::endl; 
    return 0;
}