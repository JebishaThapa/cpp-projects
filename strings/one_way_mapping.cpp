#include <iostream>
#include <string>

int main() {
    std::string w{}, s{};
    std::cin >> w >> s;

    int arr1[26]{};
    int arr2[26]{};

    int len1{static_cast<int>(w.length())};
    int len2{static_cast<int>(s.length())};

    if(len1!=len2){
        std::cout << "NO" << std::endl;
        return 0;
    }
    

    for(int i = 0; i<26; i++){
        char charW = arr1[i];
        char charS = arr2[i];

        if (arr1[charW]== -1 ){}

       
    }

    return 0;
}