#include <stdio.h>
int main(void) {
	int a,b,c,d;
	printf("Enter the Dividend : ");
	scanf("%d",&a);
	printf("\n");
	printf("Enter the Divisor : ");
	scanf("%d",&b);
	printf("\n");
	c = a/b;
	d = a%b;
	printf("Quotient is : %d",c);
	printf("\n");
	printf("Remainder is : %d",d);
	return 0;
}


