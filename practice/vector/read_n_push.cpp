#include <iostream>
#include <vector>

int main() {
    int n{};
    std::cin >> n;
    
    std::vector<int> v;

    for (int i= 0; i<n; i++){
        int temp;
        std::cin >> temp;
        v.push_back(temp);
        
    
    }
    for (int i=0; i<n; i++){
        if(i!=v.size()-1){
            std::cout << v[i] << " ";
        }
        else std::cout << v[i];
        }
    
    return 0;
}