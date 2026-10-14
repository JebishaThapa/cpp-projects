
#include <stdio.h>

int main(){
	printf("AUTHOR: JEBISHA THAPA\n");
	float l, b, h, tsa;
	printf("Enter the length of the cuboid: ");
	scanf("%f", &l);
	printf("Enter the breadth of the cuboid: ");
	scanf("%f", &b);
	printf("Enter the height of the cuboid: ");
	scanf("%f", &h);
	
	tsa = 2 * ((l*b) + (b*h) + (h*l));
	
	printf("The TSA of the cuboid is %f", tsa);
	return 0;
}