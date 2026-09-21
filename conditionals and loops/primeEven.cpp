#include <iostream>
#include <string>

bool checkPrime(int num){
    if(num <=1) return false;
    for (int i=2; i<num; i++){
        if(num % i ==0){
            return false;
        }
    return true;
    }
}

bool checkEven(int num){
    
    if(num % 2 !=0){
        return false;
    }
    return true;
}
int main(){
    int num; 

    std::cout << "Enter a number: ";

    std::cin >> num;

    std::string primeString ="Composite";
    std::string evenString = "Odd";

    bool isPrime = checkPrime(num);
    bool isEven = checkEven(num);

    if(isPrime){
        primeString = "Prime";
    }

    if (isEven) {

        evenString = "Even";
    }

    std::cout << "The number" << num << "is" << primeString << "and" << evenString << std::endl;
}