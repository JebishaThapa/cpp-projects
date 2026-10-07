#include <iostream>
#include <vector>

int main() {
    int n{};
    std::cin >> n;
    
    std::vector<int> v(n);
    
    for(int i =0; i<n; i++){
        std::cin >> v[i];
    }
    if (n > 0){
        std::cout << v[n-1];
    }
    for (int i=n-2; i>=0; i--){
        std::cout << " " << v[i];
    }

    return 0;
}
