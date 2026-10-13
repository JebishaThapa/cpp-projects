#include <stdio.h>

int main(){
    int a,b,c, sum, average;
    printf("Enter three numbers: ");
    scanf("%d%d%d" ,&a, &b, &c);
    sum = a+b+c;
    average=sum/3;
    printf("Sum: %d \nAverage: %d" , sum,average);
    return 0;
}