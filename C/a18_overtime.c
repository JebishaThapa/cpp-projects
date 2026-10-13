#include <stdio.h>

int main(){
    int wh,salary;
    printf("Enter total working hours: ");
    scanf("%d",&wh);

    if (wh<=8) salary = wh*100;
    else salary = (8*100) + ((wh-8) *120);

    printf("Total salary: %d",salary);

    return 0;
}