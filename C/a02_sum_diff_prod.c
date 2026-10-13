#include <stdio.h>

int main(){
    int a, b;
    printf("Enter two integers: ");
    scanf("%d%d",&a, &b);
    int sum= a+b;
    int diff = a-b;
    int prod = a*b;
    printf("Sum: %d \nDiff: %d \nProd: %d" ,sum, diff, prod);
    return 0;

}