#include <stdio.h>
int main(void) {
	int i,a,b,po=1;
	scanf("%d",&a);
	scanf("%d",&b);
	for(i=1;i<=b;i++){
		po = po * a;
	}
	printf("%d",po);
	return 0;
}

