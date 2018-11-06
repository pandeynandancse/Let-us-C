#include <stdio.h>
int main(void) {

	int a,no,b=0,i=0;
	printf("Enter a number : ");
	scanf("%d",&no);
	while(no>0)
	{
		a = no%8;
		no = no/8;
		b = b + a*pow(10,i);
		i++;
		
	}
	printf("%d",b);
	return 0;
}

