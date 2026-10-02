#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    if (!(cin >> n)) return 0;
    
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    
    int x;
    cin >> x;
    
    int ans = n; 
    for (int i = 0; i < n; ++i) {
        if (v[i] >= x) {
            ans = i; // Found first match
            break;  
        }
    }
    
    cout << ans << endl;
    
    return 0;
}
