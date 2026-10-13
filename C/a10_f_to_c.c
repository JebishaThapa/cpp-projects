

#include <stdio.h>

int main(){
    float c,f;
    printf("Enter centigrade temp: ");
    scanf("%f",&f);
    c=5*(f-32)/9;
    printf("Fahrenheit:%g" ,c);
    return 0;
}