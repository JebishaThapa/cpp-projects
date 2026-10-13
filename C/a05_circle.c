#include <stdio.h>


int main(){
    float r, area,circumference;
    printf("Enter the radius of circle: ");
    scanf("%f" ,&r);
    area = 3.14*r*r;
    circumference: 2*3.14*r*r;
    printf("Area:%g\nCircumference:%g" ,area,circumference);
    return 0;
}