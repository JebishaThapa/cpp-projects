#include <iostream>
#include <string>

int main() {
    std::string w1, w2;
    std::cin >> w1 >> w2;


    if(w1.length()!= w2.length()){
        std::cout << "NO";
        return 0;
    }

    std::string concated = w1+w1;

    for(size_t i = 0; i<w1.length(); i++){
        bool matchFound = true;

        for(size_t j =0; j<w2.length(); j++){
            if (concated[i + j]!= w2[j]){
                matchFound = false;
                break;
            }
        }

        if(matchFound){
            std::cout << "YES";
            return 0;
        }
    }
    std::cout << "NO";
    return 0;
}