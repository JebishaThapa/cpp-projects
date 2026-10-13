#include <stdio.h>

int main(){
    int cp,sp;
    printf("Enter cost price and selling price: ");
    scanf("%d%d",&cp,&sp);
    int pol = cp-sp;
    if(cp==sp) printf("NO LOSS OR PROFIT");
    else if(cp>sp)  printf("Loss by Rs.%d",pol);
    else  printf("Profit by Rs.%d",pol*(-1));
    
    return 0;
}