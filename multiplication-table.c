#include <stdio.h>
int main(void) {
	// your code goes here
	int a,b,c,d;
	printf("Enter the number whose multiplication table is to be found: ");
	scanf("%d",&a);
	printf("\n");
	printf("Enter the number from where your multiplication must be started: ");
	scanf("%d",&d);
	printf("\n");
	printf("Enter the number till which you have to find table: ");
	scanf("%d",&b);
	printf("\n");
	if(d<b){
		for(int i=d;i<=b;i++){
			c = a*i;
			printf( "%d * %d = %d",a,i,c);
			printf("\n");
		}
	}
	else{
		printf("Error");
	}
	return 0;
}
