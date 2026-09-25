#include <iostream>

int main(){
    int n{};
    std::cin >> n;

    int largestEven = 0;
    bool foundEven = false;
    
    for(int i=0; i<n; i++){
        int number{};
        std::cin >> number;
        if (number%2==0){
            if(!foundEven || number > largestEven){
                largestEven=number;
                foundEven= true;
            }
        }
    }
    std::cout << largestEven;
}