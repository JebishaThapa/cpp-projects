#include <stdio.h>

int main(){
    int num;
    const char* value;

    printf("enter a number: ");

    scanf("%d", &num);

    if(num%2==0)  value="even";
    else value="odd";


    printf("the number %d is %s", num, value);

    return 0;
}