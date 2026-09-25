/*
factorial means each number le multiply right chup 4 vaneko aaba 1*1
4! = 4*3*2*1=24
*/

/*
#include <iostream>
int main(){
    std::cout<< "Enter a number: ";
    int num{}; 
    std::cin >> num;

    int factorial = 1;
    for (int i=1; i<=num;i++){
        factorial = factorial*i;//1*1=1, 1*2=2 2*3=6 6*4=24
    }

    std::cout << "factorial of " << num << " is " << factorial;

}


*/
#include <iostream>

int factorial(int num){
    int initialFact = 1;
    for(int i=1; i<=num; i++){
        initialFact = initialFact*i;
    }
    return initialFact;

}
int main(){
    std::cout << factorial(20);
}
