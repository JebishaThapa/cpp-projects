#include <iostream>
#include <vector>

int main() {
    int n,m;
    std::cin >> n;
    
    std::vector<int> v(n);
    
    for(int i=0; i<n; i++){
        std::cin >> v[i];
        
    }
    
    std::cin >> m;

    std::vector<int> v1(m);

    for(int i=0; i<m; i++){
        std::cin >> v1[i];
        
    }

    std::vector<int> result;
    int i = 0;
    int j = 0;

    while(i < n && j < m){
        if(v[i] <= v1[j]){
            result.push_back(v[i]);
            i++;
        }else{
            result.push_back(v1[j]);
            j++;
        }
    }
    while(i < n){
        result.push_back(v[i]);
        i++;
    }

    while (j < m){
        result.push_back(v1[j]);
        j++;
    }

    for(size_t k=0; k< result.size(); k++){
        std::cout << result[k];
        if(k < result.size() -1){
            std::cout << " ";
        }
    }

    
    return 0;
}