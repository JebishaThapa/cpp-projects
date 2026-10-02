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
    
   
    v.push_back(0); 

    int i = n - 1;
 
    while (i >= 0 && v[i] > x) {
        v[i + 1] = v[i];
        i--;
    }
    

    v[i + 1] = x;
    
  
    for (int j = 0; j <= n; ++j) {
        cout << v[j] << (j == n ? "" : " ");
    }
    cout << "\n";
    
    return 0;
}
