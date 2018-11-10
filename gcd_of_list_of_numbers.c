#include<stdio.h>
void main(){
	
	int a[100],b,c[1000]={0},k,h=0,max,count=0,gcd;
	printf("Enter the length of list : ");
	scanf("%d",&b);
	printf("\n");
	for(int i=0;i<b;i++){
		scanf("%d",&a[i]);

	}

	for(int i=0;i<b-1;i++){

		if(a[i]>a[i+1]){
			  k = a[i];
			 a[i] = a[i+1];
			 a[i+1] = k;
		}
		//printf("%d",a[i]);
	}
	/*for(int i=0;i<b;i++){
		printf("%d",a[i] );
	}*/

   
    	for(int j=a[0];j>=1;j--){
    		
    		for(int i=1;i<b;i++){
    			if(a[0]%j==0){
		    		if(a[i]%j==0){
		    			count++;
		    			gcd = j;
		    			if(count==b-1){
		    				max=1;
		    				break;
		    			}
		    			else{
		    				continue;
		    			}
		    			

		    		}
		    		else{
		    			break;
		    			
		    		}
		    	}
    		
    		}	
    		if(max==1){
    			break;
    		}

    }
    printf("GCD of given numbers is : %d",gcd);
    printf("\n");
}
