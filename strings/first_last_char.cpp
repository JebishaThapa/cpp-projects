#include <iostream>
#include <string>
#include <cctype>

int main(){
    std::string name="jebisha";
    int num = static_cast<int>(name.length());

    std::cout << name[0] << " " << name[num - 1];

    return 0;
}