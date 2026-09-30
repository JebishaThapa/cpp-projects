#include <iostream>
#include <vector>

int main() {
    int n{};
    std::cin >> n;

    std::vector<int> v(n);
    int storePositive{};

    for(int i=0; i<n; i++){
        std::cin >> v[i];
        if(v[i]>0){
            storePositive++;
        }
    }
    std::cout << storePositive;
    return 0;
}