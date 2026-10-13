#include <stdio.h>
int main(){
    int n=1;
    num:
        if(n<=5){
            printf("%d",n);
            n++;
            goto num;
            
        }
    return 0;
}