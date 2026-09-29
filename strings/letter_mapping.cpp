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

    int map1to2[]{};
    int map2to1[]{};

    for (int i=0; i<len1; i++){
        map1to2[w[i]] = s[i];
        if(map1to2[w[i]]!= s[i]){
            std::cout << "no";

        }
        
    }

    for (int i = 0; i<len2; i++){
        map2to1[s[i]] = w[i];
        if(map2to1[s[i]!= w[i]]){
            std::cout << "noo";
        }
    }

  
   

    return 0;
}