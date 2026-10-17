#include <iostream>
#include <string>

int main() {
    std::string w1, w2;
    std::cin >> w1 >> w2;

    char mapping[26]{};

    for (size_t i = 0; i< w1.length(); i++){
        int index = w1[i] - 'a';
        char target = w2[i];

        if(mapping[index]==0){
            mapping[index]==target;
        }

        else if(mapping[index]!= target){
            std::cout << "no";
            return 0;
        }
    }
    std::cout<<"yes";
    
    return 0;
}