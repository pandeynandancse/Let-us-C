#include <stdio.h>
int main(void) {
	int i,a,b,po=1;
	printf("Enter the number(BASE): ");
	scanf("%d",&a);
	printf("\n");
	printf("Enter the power : ");
	scanf("%d",&b);
	printf("\n");
	for(i=1;i<=b;i++){
		po = po * a;
	}
	printf("Power of given number is : %d",po);
	return 0;
}

