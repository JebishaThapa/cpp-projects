#include <iostream>
#include <vector>

int main() {
    int n{};
    std::cin >> n;

    std::vector<int> v(n);
    for(int i=0; i<n; i++){
        std::cin >> v[i];

    }
    std::vector<int> result;

    for(int i=0; i< n; i++){
        if (result.empty() || v[i]!=result[result.size()-1]){
            result.push_back(v[i]);
        }
        
    }

    for(size_t i= 0; i< result.size(); i++){
        std::cout << result[i];
        if(i < result.size()-1){
            std::cout << " ";
        }
    }
    return 0;
}
/*

    std::vector<int> collapsed;
    for (int i = 0; i < n; i++) {
         If it's the very first number, or if it's different from 
         the last number we added, put it in the second vector.
        if (collapsed.empty() || original[i] != collapsed.back()) {
            collapsed.push_back(original[i]);
        }
    }

     3. Print the result with no trailing space
    for (size_t i = 0; i < collapsed.size(); i++) {
        std::cout << collapsed[i];
        if (i < collapsed.size() - 1) {
            std::cout << " "; // Print space only BETWEEN numbers
        }
    }

    return 0;
}



#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;

    std::vector<int> original(n);
    for (int i = 0; i < n; i++) {
        std::cin >> original[i];
    }

    std::vector<int> result; // This is our second vector

    for (int i = 0; i < n; i++) {
         If result is empty, we must push the first element.
         Otherwise, we ask: "is this the same as the thing I just put into result?"
         Since result has 'k' elements, the last one is at index: result.size() - 1
        if (result.empty() || original[i] != result[result.size() - 1]) {
            result.push_back(original[i]);
        }
    }

     Print the final result vector space-separated with no trailing space
    for (size_t i = 0; i < result.size(); i++) {
        std::cout << result[i];
        if (i < result.size() - 1) {
            std::cout << " ";
        }
    }

    return 0;
}

*/
