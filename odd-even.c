#include <stdio.h>
int main(void) {
	int a;
	// your code goes here
	printf("Enter number which is to be checked");
	scanf("%d",&a);
	printf("\n");
	if(a % 2 == 0){
		printf("%d is even number",a);
	}
	else{
		printf("%d is odd number",a);
	}
	return 0;
}
