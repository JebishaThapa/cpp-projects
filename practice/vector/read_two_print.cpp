#include <iostream>
#include <vector>

int main() {
    std::vector<int> v;
    int temp1{};
    int temp2{};

    
    if(std::cin >> temp1 >> temp2){
        v.push_back(temp1);
        v.push_back(temp2);
    }
    std::cout << v[0] << " " <<  v[1] << std::endl;
    return 0;
}