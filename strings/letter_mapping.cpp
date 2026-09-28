#include <iostream>
#include <string>

int main() {
    std::string w{};
    std::string s{};
    std::cin >>w >> s;

    int arr1[26]{}, arr2[26]{};
    int len1{static_cast<int>(w.length())};
    int len2{static_cast<int>(s.length())};

    for (char c: w){
        arr1[c - 'a']++;
    }
    for (char c: w){
        arr2[c- 'a']++;
    }

   
    if (len1!=len2){
        std::cout << "NO";
        return 0;
    }

    for(int i=0; i<len1; i++){
        char charW = w[i];
        char charS = s[i];
    }

   

    return 0;
}