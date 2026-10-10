#include <iostream>
#include <vector>
#include <unordered_map>

// Function that mirrors the Python logic
std::pair<int, int> twosums(const std::vector<int>& nums, int target) {
    std::unordered_map<int, int> remaining; // Stores value -> index

    for (int index = 0; index < nums.size(); ++index) {
        int i = nums[index];
        int minus = target - i;

        // Check if the complement exists in the map
        if (remaining.find(minus) != remaining.end()) {
            return {remaining[minus], index};
        }

        // Store the current number and its index
        remaining[i] = index;
    }

    // Return an empty pair if no solution is found
    return {-1, -1};
}

int main() {
    std::vector<int> testnums = {2, 7, 11, 15};
    int testtarget = 9;

    std::pair<int, int> result = twosums(testnums, testtarget);

    std::cout << "[" << result.first << ", " << result.second << "]\n";

    return 0;
}
