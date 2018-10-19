#include <stdio.h>
int main(void) {
	int i,j,a,num=0;
	printf("Enter the number of rows of floyd's triangle : ");
	scanf("%d",&a);
	printf("\n");
	for(i=0;i<a;i++){
		for(j=0;j<=i;j++){
			num++;
			printf("%d",num);
			printf(" ");
		}
		printf("\n");
	}
	return 0;
}

