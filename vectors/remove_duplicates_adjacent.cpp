#include <iostream>
#include <vector>

int main() {
    int n;
    if(!(std::cin >> n) || n <=0) return 0;
    
    std::vector<int> original(n);
    bool first_printed = false;

    for (int i = 0; i< n; i++){
        std::cin >> original[i];

        if(i==0 || original[i]!= original[i-1]){
            if (first_printed){
                std::cout << " ";
            }
            std::cout << original[i];
            first_printed = true;
        }
    }
    return 0;
}