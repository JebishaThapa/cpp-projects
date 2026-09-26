#include <iostream>
#include <string>

int main(){
    char c{};
    std::cin >> c;
    

    if(c>=97 && c<= 109) std::cout << "YES" ;
    else std::cout << "No";

    return 0;
}