#include <stdio.h>
#include <stdlib.h>
struct node
{
	int data;
	struct node *link;
};
struct node *top=NULL;
void push()
{
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	if (newnode==NULL)
	{
		printf("\nNo space available");
		return;
	}
	newnode->link=NULL;
	printf("\nEnter the element to insert: ");
	scanf("%d",&newnode->data);
	if(top==NULL)
	{
		top=newnode;
	}
	else 
	{
		newnode->link=top;
		top=newnode;
	}
	printf("\n%d inserted successfully",newnode->data);
}
void pop()
{
	struct node *temp=top;
	if(top==NULL)
	{
		printf("Stack underflow");
		return;
	}
	printf("%d is popped",temp->data);
	top=temp->link;
	free(temp);
}
void display()
{
	struct node *temp=top;
	if(top==NULL)
	{
		printf("\n No elements");
		return;
	}
	printf("Elements in stack are: ");
	while(temp!=NULL)
	{
		printf(" %d ",temp->data);
		temp=temp->link;
	}
}
void peek()
{
	struct node *temp=top;
	if(top==NULL)
	{
		printf("stack underflow");
		return;
	}
	printf("Top element is %d", temp->data);
}
void search()
{
	struct node *temp=top;
	int key,found=0,pos=0;
	if(top==NULL)
	{
		printf("\nStack underflow\n");
		return;
	}
	printf("\n Enter the element to search\n");
	scanf("%d",&key);
	while(temp!=NULL)
	{
		if(temp->data==key)
		{
			printf("\n %d elements founded at %d \n",temp->data,pos+1);
			found=1;
		}
		temp=temp->link;
		pos=pos+1;
	}
	if(!found)
	{
		printf("\nElement not found");
	}
}
void main()
{
	int choice;
	do{
		printf("\nStack \n");
		printf("\n1.Push\n2.Pop\n3.Peek\n4.Display\n5.Search\n6.Exit\n");
		printf("\nEnter the choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:push();
			break;
			case 2:pop();
			break;
			case 3:peek();
			break;
			case 4:display();
			break;
			case 5: search();
			break;
			case 6:printf("\nExit\n");
			break;
			default:printf("Enter a valid choice");
			break;
		}
	}while(choice!=6);
}
				
		 

