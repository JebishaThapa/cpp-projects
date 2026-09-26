#include <iostream>
#include <main>

int main(){
    std::string w{};
    std::cin >> w;

    int left{};
    int right{static_cast<int>(w.length())};
    int righPoint = right-1;
    

    while (left < righPoint){
        if (w[left]!=w[righPoint]){
            return false;
        }
        

        left++;
        righPoint--;
    }


    return 0;
}