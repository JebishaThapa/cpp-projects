#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m;

    // Read the first vector
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Read the second vector
    cin >> m;
    vector<int> b(m);
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }

    vector<int> result;

    // Nested scan: loop through the first vector
    for (int i = 0; i < n; i++) {
        
        // Check 1: Is this value in the second vector?
        bool foundInB = false;
        for (int j = 0; j < m; j++) {
            if (b[j] == a[i]) {
                foundInB = true;
                break;
            }
        }

        // Check 2: Avoid printing/adding the same value twice
        if (foundInB) {
            bool alreadyExists = false;
            for (size_t k = 0; k < result.size(); k++) {
                if (result[k] == a[i]) {
                    alreadyExists = true;
                    break;
                }
            }

            // Save to result if it is new
            if (!alreadyExists) {
                result.push_back(a[i]);
            }
        }
    }

    // Output formatting: no trailing spaces, print NONE if empty
    if (result.size() == 0) {
        cout << "NONE";
    } else {
        for (size_t i = 0; i < result.size(); i++) {
            cout << result[i];
            if (i < result.size() - 1) {
                cout << " "; // Print space only between numbers
            }
        }
    }

    return 0;
}
