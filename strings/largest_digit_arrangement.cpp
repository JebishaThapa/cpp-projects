#include <iostream>
#include <string>

int main() {
    std::string digi{};
    std::cin >> digi;

    int arr[10]{};

    for(char c : digi){
        arr[c - '0']++;
    }
    for(int i=9; i>=0; i--){
        while (arr[i]>0){
            std::cout << i;
            arr[i]--;
        }
    }
   
    
    return 0;
}