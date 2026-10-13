#include <stdio.h>

int main(){
    int p,t,r, si, a;
    
    printf("Enter principle, rate, time:" );
    scanf("%d%d%d", &p,&r,&t );
    si=(p*t*r)/100;
    a=si+p;
    printf("SI:%d\nA:%d",si, a);

    return 0;

}