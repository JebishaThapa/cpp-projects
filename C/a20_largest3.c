#include <stdio.h>

int main(){
    int a,b,c;
    printf("enter three numbers: ");
    scanf("%d%d%d" ,&a, &b, &c);
    if(a!=b && a!=c){
        if(a>c){
            if(a>b) printf("%d is largest",a);
            else printf("%d is largest",b);
        }
        else {
            if(b>c) printf("%d is largest",b);
            else printf("%d is largest",c);
        }  

    }
    return 0;
}