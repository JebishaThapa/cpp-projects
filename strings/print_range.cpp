#include <iostream>

int main() {
    int n{};
    std::cin >> n;
    for(int i=0; i<n; i++){
        std::cout << i+1;
        if(i < n-1){
            std::cout << " ";
        }
    }
    std::cout << "\n";
    return 0;
}