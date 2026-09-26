#include <iostream>
#include <string>

int main(){
    std::string w{};
    std::cin >> w;

    int len{static_cast<int>(w.length())};

    if (len > 1){
        char revised = w[0];
        w[0]= w[len-1];
        w[len-1]= revised;
    }
    std::cout << w;
    return 0;
}