#include <iostream>

int main(){
    int n;
    std::cin >> n;

    int number;
    std::cin >> number;

    int smallest = number;
    int largest = number;

    for(int i=1; i<n; i++){
        std::cin >> number;
        if(number< smallest){
            smallest = number;
        }
        if(number > largest){
            largest = number;
        }

    }
    int value = largest - smallest;
    std::cout << value;
}