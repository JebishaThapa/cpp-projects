#include <iostream>

int main(){
    int number;
    std::cout << "enter a number: ";
    
    std::cin >> number;

    if (number <= 1){
        std::cout << "the number is composite" << std::endl;
        return 0;
    }

    for (int i=2; i<number; i++){
        if (number % i == 0){
            std::cout << "The number is composite" << std::endl;
            return 0;
        }
    }
    std::cout << "the number is prime" <<std::endl;
    return 0;

}