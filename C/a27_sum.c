#include <stdio.h>

int main(){
    int n,rem=0,s=0;

    printf("Enter a number: ");
    scanf("%d" ,&n);

    sum:
        rem = n%10;
        s += rem;
        n = n/10;
        if (n>0) goto sum;
    printf("%d",s);
    return 0;
}
