#include <iostream>
#include <string>
#include <cctype>

int main(){

    std::string name;
    std::cin>> name;

    for (char &i : name){
        i = std::toupper(i);
    }
    std::cout << name;

    for (char &i : name){
        i = std::tolower(i);
    }
    for (char &i : name){
        i = i-32;
    }

    std::cout << name;
    
    return 0;
}