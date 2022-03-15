#include<stdio.h>
#include<stdlib.h>
#define max 4
int q[max],front=-1,rear=-1;
void enqueue(int ele)
{
	if(rear==max-1)
	{
		printf("Queue is full\n");
		exit(0);
	}
	q[++rear]=ele;
	if(front==-1)
	front=0;
}
void dequeue()
{
	int ele;
	if(front==-1)
	{
		printf("Queue is empty\n");
		exit(0);
	}
	ele=q[front];
	if(front==rear)
	front=rear=-1;
	else
	front=front+1;
}
void display()
{
	int i;
	if(front==-1)
	{
		printf("Queue is empty\n");
		exit(0);
	}
	for(i=front;i<=rear;i++)
	{
		printf("%d\n",q[i]);
	}
}
void main()
{
	int ch,op=1,ele;
	while(op)
	{
		printf("1.Enqueue\n2.Dequeue\n3.Display\nEnter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:printf("Enter element:");
			       scanf("%d",&ele);
			       enqueue(ele);
			       break;
			case 2:dequeue();
			       break;
			case 3:display();
			       break;
		}
		printf("Do you want to continue(0/1):");
  		scanf("%d",&op);
	}
}
	
