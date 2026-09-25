#include <iostream>

int main(){
    int integer{}, num{};
    std::cin >> integer >> num;
    int arr[integer];

    int output=0;
    
    for(int i = 0; i<integer; i++){
        int item{};
        std::cin >> item;
        if(i>num){
            output++;
        }
    }
    std::cout << output;
return 0;
}