#include <stdio.h>

int main(){
    int a, b;
    printf("Enter two integers: ");
    scanf("%d%d",&a, &b);
    int quotient = b/a;
    int rem = b%a;
    printf("Quotient: %d \nRemainder: %d" ,quotient, rem);
    return 0;
}