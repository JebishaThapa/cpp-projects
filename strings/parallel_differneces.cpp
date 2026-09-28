#include <iostream>
#include <string>

int main() {
    std::string w1{}, w2{};
    std::cin >> w1 >> w2;

    int len1{static_cast<int>(w1.length())};

    bool hasDiff = false;

    for (int i = 0; i< len1; i++){
        if (w1[i] != w2[i]){
            
            std::cout << ( i+1) << " ";
            
            hasDiff = true;
        }
    }
    
    if(!hasDiff) std::cout << "SAME" << std::endl;
   

    return 0;
}