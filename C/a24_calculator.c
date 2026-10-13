#include <stdio.h>

int main(){
    char operator;
    int a,b,result;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    printf("Enter an operator(+, -, *): ");
    scanf("%c",&operator);

    switch(operator){
        case '+':
            result = a + b;
            printf("Result:%d",result);
            break;
        case '-':
            result = a - b;
            printf("Result:%d",result);
            break;
        case '*':
            result = a * b;
            printf("Result:%d",result);
            break;
        default:
            printf("error");
            break;

    }
    return 0;


}