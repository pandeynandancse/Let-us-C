#include <stdio.h>
#include<math.h>
int main(void) {
	// your code goes here
	int i=0,a,b=0,no;
	printf("Enter the number : ");
	scanf("%d",&no);
	while(no>0)
	{
		a = no%2;
		no = no/2;
		b = b + a*pow(10,i);
		i++;
		
	}
	printf("%d",b);
	return 0;
}

