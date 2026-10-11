#include <iostream>
using namespace std;

bool isPalindromeNumber(int num) {
    // Negative numbers are not palindromes
    if (num < 0) return false;

    int original = num;
    long long reversed = 0; // Use long long to prevent overflow errors

    while (num > 0) {
        int digit = num % 10;          // Extract the last digit
        reversed = reversed * 10 + digit; // Build the reversed number
        num /= 10;                      // Remove the last digit
    }

    return original == reversed;
}

int main() {
    int n = 12321;
    if (isPalindromeNumber(n)) {
        cout << n << " is a palindrome." << endl;
    } else {
        cout << n << " is not a palindrome." << endl;
    }
    return 0;
}
