#include<stdio.h>

int n=5;
int Cqueue[5];
int front=-1,rear=-1;

void equeue()
{
	
	if((rear+1)%n==front)
	{
		printf("Overflow!!");
		return;
	}
	
	int data;
	printf("\nEnter the data\n");
	scanf("%d",&data);
	 
	if(rear==-1 && front==-1)
	{
		rear=0;
		front =0;
	}
	else if(rear==n-1 && front!=0)
	{
		rear=0;
	}
	else{
		rear=(rear+1)%n;
	}
	Cqueue[rear]=data;
 
}

void dqueue()
{
	if(isempty())
	{
		printf("Underflow!!\n\n");
		return;
	}
	
	if(front==rear)
	{
		front=rear=-1;
	}
	else
	{
	  	front=(front+1)%n;
    }
	
}

int isfull()
{
   if((rear+1)%n==front)
   {
   	return 1;
   }
   return 0;	
}

int isempty()
{
	if(rear==-1 && front==-1)
	{
		return 1;
	}	
	
	return 0;
}


void print()
{
	while(!isempty())
	{
		printf("%d ",Cqueue[front]);
		dqueue();
	}
}

int main()
{
	int choise=1,op;
	printf("1.equeue\n2.dequeue\n");
	while(choise)
	{
		printf("\nChoose the opration\n");
		scanf("%d",&op);
		
		switch(op)
		{
			case 1:
				equeue();
				break;
				
			case 2:
				dqueue();
				break;
				
			default:
				printf("Invalid opration");
				
		}
		
		printf("continue(1) & exit(0)\n");
		scanf("%d",&choise);
	}
	
  
	printf("\n");
	print();
	
	return 0;
}




