#include <stdio.h>

int main(){
    float b,h,area;
    printf("Enter breadth and height : ");
    scanf("%f%f",&b, &h);
    area = 0.5*b*h;
    printf("Area:%g",area);
    return 0;

}