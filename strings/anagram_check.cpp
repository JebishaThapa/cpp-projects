#include <iostream>
#include <string>

int main(){
    std::string w1, w2;
    std::cin >> w1 >> w2;

    int len1{static_cast<int>(w1.length())};
    int len2{static_cast<int>(w2.length())};

    int count1[26]{};
    int count2[26]{};


    if (len1!=len2){
        std::cout << "NOOO";
        return 0;
    }


   
    for(char c: w1){
        count1[c-'a']++;
            
    }
    for(char c: w2){
        count2[c-'a']++;
            
    }
    
    for(int i=0; i<26; i++){
        if(count1[i]!=count2[i]){
            std::cout << "NOO";
            return 0;
        }
    }
    std::cout << "YESSS";
    

    return 0;
}