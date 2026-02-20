#include<stdio.h>
#define MAX 5

int stack[MAX];
int top=-1;
void push()
{
	int item;
	if(top==MAX-1)
	{
		printf("stack overflow!\n");
		return;
	}
	printf("enter element to push:");
	scanf("%d",&item);
	stack[++top]=item;
	printf("element pushed successfully.\n");
}
//pop operation
void pop()
{
	if(top==-1)
	{
		printf("stack underflow!\n");
		return;
	}
	printf("popped element: %d\n",stack[top--]);
}
//display stack elements
void display()
{
	if(top==-1)
	{
		printf("stack is empty.\n");
		return;
	}
printf("stack elements:\n");
for(i=top;i>=0;i--)
 printf("%d\n",stack[i]);
}
