/*

filename: pair_sum_sorted.cpp

Given a sorted array of distinct integers nums and a target T, determine whether any two elements sum to T. Return true/false.

input:[2,3,4,5]
target:5
output : true
*/

#include <iostream>

int main(){
    int arr[]={1,1,1,1,4};
    int target = 3;
    int size = sizeof(arr)/sizeof(arr[0]);
    
    int left = 0;
    int right = size-1;
    bool check = false;


    while (left < right){
        int sum = arr[left] + arr[right];
        if (sum == target){
            check = true;
            break;
        }
        else if ( sum < target){
            left++;
        }
        else right--;
    }
    if(check){
        std::cout << "true" << std::endl;
    }
    else std::cout << "false" << std::endl;

return 0;
    
}