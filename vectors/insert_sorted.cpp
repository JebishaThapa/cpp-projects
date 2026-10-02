#include <iostream>
#include <vector>

int main() {
    int n{};
    std::cin >> n;

    std::vector<int> v(n);
    for(int i=0; i<n; i++){
        std::cin >> v[i];
    }
    int x{};
    std::cin >> x;

    v.push_back(0);

    while (n >0 && v[n-1] > x){
        v[n] = v[n-1];
        n--;
    }


   


    for (size_t j = 0; j < v.size(); j++) {
        std::cout << v[j];
        if (j < v.size() - 1) {
            std::cout << " ";
        }
    }
    std::cout << "\n";

    return 0;
}