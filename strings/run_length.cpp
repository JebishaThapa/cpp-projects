#include <iostream>
#include <string>

int main(){
    std::string w{};
    std::cin >> w;

    int count=1;
    for (int i=0; i<w.length(); i++){
        if (i + 1 < w.length() && w[i]==w[i+1]){
            count++;
        }
        else {std::cout << w[i] << count;
        count = 1;
        }
    }
    return 0;
}