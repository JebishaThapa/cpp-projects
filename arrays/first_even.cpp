#include <iostream>

int main(){
    int n{};
    std::cin >>n;

    bool even = false;

    for(int i=0; i<n; i++){
        int number{};
        std::cin >> number;

        if(number%2==0){
            even = true;
            break;
        }
    
    if (even){
        std::cout<< number;
    }
    else{
        std::cout << "None";
    }
        
    }
    return 0;

}
