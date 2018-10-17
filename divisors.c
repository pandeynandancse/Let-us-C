/* program for finding divisors of a number */
#include <stdio.h>
int main(void) {
	// your code goes here
	int a,i;
	printf("Enter the number whose divisor we have to find : ");
	scanf("%d",&a);
	printf("\n");
	printf("Divisor of %d are : ",a);
	for(i=1;i<a;i++){
		if(a % i ==0){
			printf("%d",i);
			printf(" ");
		}
	}
	return 0;
}
