#include <iostream>
#include <string>

int main() {
    std::string w1, w2;
    std::cin >> w1 >> w2;

    char mapping[26]{}; // create a mapping table for the 26 letters (a to z).
    //initialize it with 0 so it fills the whole table with 0s.

    for (size_t i =0; i< w1.length(); i++){ //loop through the words position by positiob (i = 0, 1,2)
        int index = w1[i] - 'a';//find slot in our arr (0 for 'a', 1 for 'b')

        char target = w2[i];//this is the target letter we see in word 2 rn

        if (mapping[index] == 0){//if the slot is empty, save the mapping 
            mapping[index] = target;
        }

        else if (mapping[index]!= target){//if the slot is not empty, check if it matches our target.// if it disagrees like a mapped to x but now seeing in z show no 
            std::cout << "NO";
            return 0;//stop the whole program immediately
        }
    }
//if the loop finishes without stopping, everything matched perfectly
    std::cout << "YES";
    return 0;
}