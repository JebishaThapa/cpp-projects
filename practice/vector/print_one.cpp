#include <iostream>
#include <vector>

int main() {
    int n{};
    std::cin >> n;

    std::vector<int> v(n);

    for(int i=0; i<n; i++){
        std::cin >> v[i];
        if(v[i]==v[2])
        std::cout << v[2] << std::endl;
    }
    return 0;
}