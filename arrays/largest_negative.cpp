#include <iostream>

int main(){

    int n{};
    std::cin >> n;

    int largestNegative= 0;
   

    for(int i=0; i<n; i++){
        int integer{};
        std::cin >> integer;
        if(integer<0){
            if(integer>largestNegative){
                largestNegative == integer;
            }
    
        }
    }
    return 0;

    std::cout << largestNegative;
}