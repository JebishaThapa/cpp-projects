#include <iostream>
#include <vector>

int main(){
   

    std::vector<int> x;
    int temp;
    
    if(std::cin >> temp){
        x.push_back(temp);
    }

    if(!x.empty()){
        std::cout << x[0] << std::endl;
    }

   
        

    return 0;
}