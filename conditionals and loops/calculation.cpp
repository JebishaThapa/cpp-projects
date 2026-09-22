#include <iostream>

int addition(int num1, int num2){
    return num1+num2;
}

int subtraction(int num1, int num2){
    return num1 - num2;
}

int multiplication (int num1, int num2){
    return num1*num2;
}

int division(int num1, int num2){
    if(num2!=0){
        return num1/num2;
    }
}

int main(){
    std::cout << "Enter the first number: ";
    int num1{};
    int num2{};
    std::cin >> num1;

    std::cout << "Enter the second number: ";
    std::cin >> num2;

    int add = addition(num1, num2);
    int sub = subtraction(num1, num2);
    int multiply = multiplication(num1, num2);
    int divide = division(num1, num2);

    std::cout << "addition: " << add << " subtraction: " << sub << " multiplication: " << multiply << " division: " << divide;
}