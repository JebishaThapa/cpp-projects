#include <stdio.h>

int main(){
    int a,b,c;
    printf("enter three numbers: ");
    scanf("%d%d%d" ,&a, &b, &c);
    
    if(a==b){
        if(a==c) printf("all equal");
        else printf("%d and %d equal", a, b);
    }else{
        if(a==c) printf("%d and %d are equal", a, c);
        else{
            if(b==c) printf("%d and %d are equal", b, c);
            else printf("all different");
        }
    }

    return 0;
    
}