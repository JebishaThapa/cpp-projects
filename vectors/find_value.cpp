#include <iostream>
#include <vector>

int main() {
    int n{};
    std::cin >> n;
    
    std::vector<int> v;
    for (int i=0; i<n; i++){
        int temp;
        std::cin >> temp;
        v.push_back(temp);

    }
    int target{};
    bool found= false;
    std::cin >> target;
    for (int i=0; i<n; i++){
        if (target == v[i]){
            found=true;
            std::cout<< "YES" <<std::endl;
            break;
        }
    }
    if(!found) std::cout<< "NO" << std::endl;
    
    
    return 0;
}