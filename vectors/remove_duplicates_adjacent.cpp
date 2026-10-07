#include <iostream>
#include <vector>

int main() {
    int n;
    if (!(std::cin >> n) || n <= 0) return 0;

    std::vector<int> original(n);
    bool first_printed = false;

    for (int i = 0; i < n; ++i) {
        std::cin >> original[i];

        // Print if it's the very first number, OR if it's different from the previous one
        if (i == 0 || original[i] != original[i - 1]) {
            if (first_printed) {
                std::cout << " "; // Print space before all numbers except the first one
            }
            std::cout << original[i];
            first_printed = true;
        }
    }
    std::cout << "\n";

    return 0;
}
/*

#include <iostream>
#include <vector>

int main() {
    int n;
    if (!(std::cin >> n) || n <= 0) return 0;

    // 1. Read all n integers into the first vector
    std::vector<int> original(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> original[i];
    }

    // 2. Build the second vector
    std::vector<int> result;

    for (int i = 0; i < n; ++i) {
        // Keep it if result is empty, OR if the current number 
        // doesn't match the last pushed element in result
        if (result.empty() || original[i] != result.back()) {
            result.push_back(original[i]);
        }
    }

    // 3. Print result with no trailing space
    for (size_t i = 0; i < result.size(); ++i) {
        std::cout << result[i];
        if (i < result.size() - 1) {
            std::cout << " ";
        }
    }
    std::cout << "\n";

    return 0;
}

*/