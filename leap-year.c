#include <stdio.h>
int main(void) {
	int a;
	printf("Enter year to be checked");
	scanf("%d",&a);
	printf("\n");
	if(a % 4 == 0){
		if(a % 100 == 0){
			if(a % 400 == 0){
				printf("%d is a leap year",a);
			}
			else{
				printf("%d is not a leap year",a);
			}
		}
		else{
				printf("%d is a leap year",a);
		}
	}
	else{
		printf("%d is not a leap year",a);
	}
	return 0;
}

