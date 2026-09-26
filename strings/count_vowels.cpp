#include <iostream>
#include <string>

int main(){
    std::string word;
    std::cin >> word;
    int count=0;
    for(char &i : word){
        if(i == 'a' || i=='e'|| i == 'i'|| i =='o'|| i== 'u'){
            count++;
        }
    }
    std::cout << count;
    return 0;

}