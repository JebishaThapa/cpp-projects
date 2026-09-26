#include <iostream>
#include <string>

bool isAnagram(const std::string &s, const std::string &w){
    if (s.length()!= w.length()) return false;
    int arr[26]{};

    for (char sc : s){
        arr[sc - 'a']++;
    }
    for (char wc : w){
        arr[wc - 'a']--;

    }
    for (int i = 0; i<26; i++){
        if(arr[i]!=0) return false;
    }
    return true;

}
int main(){
    std::string s{}, w{};
    std::cin >> s >> w;

    if (isAnagram(s, w)) std::cout << "YESS" <<std::endl;
    else std::cout << "NOO";

    return 0;
}


/*
if length ! return false
 two array X 




*/