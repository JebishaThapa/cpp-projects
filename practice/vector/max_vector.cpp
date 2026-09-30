#include<iostream>
#include<vector>

int main() {
    int n{};
    std::cin >> n;
    
    std::vector<int> v(n);
    

    for(int i=0; i<n; i++){
        std::cin >> v[i];
    }
    int largestValue=v[0];
    for(int i=0; i<n; i++){
        if(v[i] > largestValue){
            largestValue = v[i];
        }
    }
    std::cout << largestValue;
    return 0;
};

