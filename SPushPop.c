#include<stdio.h>
#include<stdlib.h>
#define max 3
int top=-1,s[max],ch,ele,i;
void push()
{
	printf("Enter the element to push\n");
	scanf("%d",&ele);
	if(top==max-1)
	{
		printf("Stack is full\n");
		exit (0);
	}
	s[++top]=ele;
}
int pop()
{
	if(top==-1)
	{
		printf("Stack is empty\n");
		exit (0);
	}
	top=top-1;
	return ele;
}
void display()
{
	if(top==-1)
	{
		printf("Stack is empty\n");
	}
	else
	{
		printf("\nStack elements are:\n");
		for(i=0;i<=top;i++)
		printf("%d\t",s[i]);
	}
}
void main()
{
	int ch,opt=1;
	while(opt)
	{
		printf("\n1.Push\t2.Pop\t3.Display\t4.Exit\nEnter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: push();
			        break;
			case 2: pop();
			        break;
			case 3: display();
			        break;
			case 4: exit (0);
			default:printf("Invalid choice");
				break;
		}
		printf("\nDo you want to continue(0/1):");
		scanf("%d",&opt);
	}
}			
		
