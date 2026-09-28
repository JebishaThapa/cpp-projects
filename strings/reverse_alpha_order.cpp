#include <iostream>
#include <string>

int main() {
    
    std::string w{};
    std::cin >> w;

    int arr[26]{};

    for(char c: w){
        arr[c -'a']++;
    }

    for(int i=25; i>=0; i--){
        while (arr[i]>0){
            std::cout << static_cast<char>(i + 'a');
            arr[i]--;
        }
    }

    return 0;
}