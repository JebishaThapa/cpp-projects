#include <stdio.h>

int main(){
    int n,rev=0, rem;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    int p = n;
    reversed:
        rem = n % 10;
        rev = rev*10 + rem;
        n = n/10;
        if(n!=0) goto reversed;
    printf("reverse is %d",rev);
    

    if (rev==p) printf("\nIt is pallindrome");
    else printf("\nNot");

    return 0;
    

}