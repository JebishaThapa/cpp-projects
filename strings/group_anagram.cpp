#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>


std::vector<std::vector<std::string>> groupAnagrams(std::vector<std::string>& strd){
    std::unordered_map<std::string, std::vector<std::string>> anagramGroups;

    for(const std::string& s:strd){
        int count[26]{};
        for(char c: s){
            count[c - 'a']++;
        }

        std::string key ="";
        for(int i=0; i<26; i++){
            key+= std::to_string(count[i]) + "#";
        }
        anagramGroups[key].push_back(s);
    }
}    

