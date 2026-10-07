#include <iostream>
#include <vector> 
int main() {
    int n{};
    std::cin >> n;

    std::vector<int> v(n);

    for(int i=0; i<n; i++){
        std::cin >> v[i];

    }
    std::cout << v[0];
    for (int i = 1; i<n; i++){
        v[i]= v[i] + v[i - 1];
        std::cout << " " << v[i];
        
        
    }
    return 0;
}
