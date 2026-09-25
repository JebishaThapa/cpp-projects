#include <iostream>

int main(){
    int n{};
    std::cin>>n;

    int check{};
    int index = 0;

    for(int i=1; i<=n; i++){
        int number{};
        std::cin >> number;
        if(number <= check || i==1){
            check = number;
            index = i;

        }
    }
    std::cout << index;
    return 0;
}