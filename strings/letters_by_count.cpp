#include <iostream>
#include <string>

int main(){
    //appear the most time
    //alphabet 
    std::string w{};
    std::cin>>w;

    int arr[26]{};

    int len{static_cast<int>(w.length())};

    for (char c: w){
        arr[c - 'a']++;
    }


    for(int i = len; i>= 1; i--){
      for (int j = 0; j < 26; j++){
        if(arr[j] )
      }
    }


    return 0;
}