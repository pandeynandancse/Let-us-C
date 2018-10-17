/* program for finding factorial of a number */
#include <stdio.h>
int main(void) {
	// your code goes here
	int a,i,b,fac=1;
	printf("Enter the number whose factorial we have to find : ");
	scanf("%d",&a);
	printf("\n");
	printf("Factorial of %d is : ",a);
	for(i=a;i>=1;i--){
		fac = fac * i;
	}
	printf("%d",fac);
	return 0;
}
