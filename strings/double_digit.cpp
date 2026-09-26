#include <iostream>


int main(){
    char c{};
    std::cin >> c;

    int multiple = (c-48)* 2;
    
    std::cout << multiple;


    return 0;
}
