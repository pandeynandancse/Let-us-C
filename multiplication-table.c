#include <stdio.h>
int main(void) {
	int a,b,c,d;
	printf("Enter the number whose multiplication table is to be found: ");
	scanf("%d",&a);
	printf("Enter the number from where your multication must be started: ");
	scanf("%d",&d);
	printf("Enter the number till which you have to find table: ");
	scanf("%d",&b);
	if(d<b){
		for(int i=d;i<=b;i++){
			c = a*i;
			printf( "%d * %d = %d",a,i,c);
			printf("\n");
		}
	}
	
	return 0;
}
