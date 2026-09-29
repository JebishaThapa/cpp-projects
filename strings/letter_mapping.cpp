#include <iostream>
#include <string>
int main() {
    std::string w1, w2;
    std::cin >> w1 >> w2;

    int mapping1to2[26]{};
    int mapping2to1[26]{};

    if(w1.length()!=w2.length()) {
        std::cout << "NO";
        return 0;
    }

    for (size_t i=0; i<w1.length(); i++){
        int index = w1[i] - 'a';

        char target= w2[i];

        if (mapping1to2[index]==0){
            mapping1to2[index]= target;
        }
        else if (mapping1to2[index]!=target){
            std::cout << "NO";
            return 0;
        }
    }
    for (size_t i=0; i<w1.length(); i++){
        int index = w2[i] - 'a';

        char target= w1[i];

        if (mapping2to1[index]==0){
            mapping2to1[index]= target;
        }
        else if (mapping2to1[index]!=target){
            std::cout << "NO";
            return 0;
        }
    }
    std::cout << "YES";


    return 0;
}