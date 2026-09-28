#include <iostream>
#include <string>

int main(){

    //appear the most time
    //alphabet 
  std::string w{};
  std::cin>>w;

  int arr[26]{};

  for (char c: w){
    arr[c - 'a']++;
  }

  for(int i =1; i<=26; i++){
    int k = 27 - i;

    for(int j = 0; j<26; j++){
      if(arr[j]==i){
        std::cout << static_cast<char>(j + 'a') << i;
      }
    }
  }


    return 0;
}