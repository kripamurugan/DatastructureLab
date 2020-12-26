
#include<stdio.h>
#include<stdlib.h>
int front=-1,rear=-1,queue[100],max;

void insert();
void delete();
void search();
int main()
{
	int choice;
	printf("Enter maximum elements in the queue ");
	scanf("%d",&max);
	printf("Menu\n1.Insert\n2.Delete\n3.Search\n4.Exit\n");
	do
	{
		printf("Enter your choice ");
		scanf("%d",&choice);
		switch(choice)
		{
		case 1:
			insert();
			break;
		case 2:
			delete();
			break;
		case 3:
			search();
			break;
		case 4:
			exit(0);
		default: 
			printf("Wrong choice\n");
			break;
		}
	}
	while(1);
	return 0;
};
void insert()
{
	int x;
	if((rear+1)%max==front)
	{printf("CIRCULAR QUEUE OVERFLOW\n");
	return;
	}

	if(front==-1 && rear==-1)
	{
	front=0;
	rear=0;
	}
	else if(rear==max-1 && front!=0)
	rear=0;
	else
	rear=(rear+1)%max;
	printf("Enter the element to be inserted ");
	scanf("%d",&x);
	queue[rear]=x;
}
	
void delete()
{
	if(front==-1) 
		printf("CIRCULAR QUEUE UNDERFLOW\n");
	else 
	{
		printf("Element deleted: %d\n",queue[front]);
		if(front==rear)
		{
		front=-1;
		rear=-1;
		}
		else if(front==max-1)
		front=0;
		else
		front++;
	}

}
void search()
{
	int i,value;

	if(front==rear)
	{	printf("CIRCULAR QUEUE IS EMPTY\n");
		return;
	}
	printf("Enter element to be searched ");
	scanf("%d",&value);
	if(front<rear)
	{
		for(i=front;i<=rear;i++)
		{if(queue[i]==value)
		{printf("%d found at position %d\n",queue[i],i);
		return;
		}}
	}
	else{
		for(i=front;i<max;i++)
		{if(queue[i]==value)
		{printf("%d found at position %d\n",queue[i],i);
		return;
		}}
		for(i=0;i<=rear;i++)
		{if(queue[i]==value)
		{
		printf("%d found at position %d\n",queue[i],i);
		return;
		}}
	}
	printf("Element not found\n");
}