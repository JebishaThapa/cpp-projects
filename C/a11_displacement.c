#include <stdio.h>

int main(){
    float u, t,a,s;
    printf("Enter initial velocity, time, accelration: ");
    scanf("%f%f%f" ,&u,&t,&a);
    s= u*t + 0.5*a*t*t;
    printf("S:%g m", s);
    return 0;
}