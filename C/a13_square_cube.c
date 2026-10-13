#include <stdio.h>
#include <math.h>

int main(){
    float n;
    printf("Enter number: ");
    scanf("%f",&n);
    printf("square: %g" ,n*n, pow(n,2));
    printf("cube: %g", n*n*n, pow(n,3));
    return 0;
}