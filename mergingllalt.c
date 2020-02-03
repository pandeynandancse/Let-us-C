#include<stdio.h>
#include<stdlib.h>
typedef struct node 
{
	int data;
	struct node* next;
}nodee;


/*
nodee* createNode(int inpu)
{
	nodee* new = (nodee*)malloc(sizeof(nodee));
	new->data = inpu;
	new->next = NULL;
	return new;
}*/


void push(nodee ** head_ref, int new_data) 
{ 
    nodee* new_node =  
           (nodee*) malloc(sizeof(nodee)); 
    new_node->data  = new_data; 
    new_node->next = (*head_ref); 
    (*head_ref)  = new_node; 
} 
  


     

nodee * merge(nodee* head1,nodee* head2)
{
	nodee* x = head1;
	nodee* y = head2;
	nodee*a;
	nodee*b;
	if(x && y )
	{	
		repeat:
		a = x->next;
		x->next = y;
		b = y->next;
		y->next=a;
		if(!a->next)
			a->next = b;
		else{
			x=a;
			y=b;
			a=a->next;
			goto repeat;
		}
	}
	return head1;
}


int main()
{
	int inpu=2,n,i,choice,dell,again=0;
	nodee* head1 = NULL;
	nodee* head2 = NULL;
	nodee*x;
	nodee*y;
	
					printf("Enter the number of elements\t");
					scanf("%d",&n);
					for(i=0; i<n;i++)
					{
						printf("Enter the number ");
						scanf("%d",&inpu);
						push(&head1 , inpu);
					}
				printf("Enter the number of elements for second list\t");
					scanf("%d",&n);
					for(i=0; i<n;i++)
					{
						printf("Enter the number \n");
						scanf("%d",&inpu);
						push(&head2,inpu );
					}
					head1= merge(head1,head2);
						y= head1;
					printf("Printing the linked list in sorted way\n");
					while(y!=NULL)
					{
						printf("%d\n",y->data);
						y= y->next;
					}
	return 0;
	
}