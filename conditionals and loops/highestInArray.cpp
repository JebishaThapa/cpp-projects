#include <iostream>

int main(){

    int scores[]= {2,5,7,9,8};
    int size = sizeof(scores)/ sizeof(scores[0]);

    int sum = 0;
    int maxScore = scores[0];

    for(int i=0; i<size; i++){
        sum += scores[i];

        if(scores[i] > maxScore){
            maxScore = scores[i];
        }
    }

    std::cout << "Number of scores: " << size << "\n";
    std::cout << "Total sum: " << sum << "\n";
    std::cout << "Highest Score: " << maxScore;

    return 0;
}