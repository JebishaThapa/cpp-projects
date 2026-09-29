#include <iostream>
#include <string>

int main() {
    std::string w1{}, w2{};
    std::cin >> w1 >> w2;

    int len1{static_cast<int>(w1.length())};

    bool firstDiff = true;

    for (int i = 0; i< len1; i++){
        if (w1[i] != w2[i]){
            if (!firstDiff){
                std::cout << " ";
            }
            
            std::cout << ( i+1);
            firstDiff = false;
        }
    }
    
    if(firstDiff) std::cout << "SAME" << std::endl;
    else std::cout << "\n";
   

    return 0;
}