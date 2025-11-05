#include <stdio.h>
#define max 5
int queue[max];
int front=-1,rear=-1;
int isfull()
{
if((rear+1) % max==front)
{
return 1;
}
return 0;
}
int isempty()
{
if(front==-1 && rear==-1)
{
return 1;
}
return 0;
}



void display()
{
int i;
if(isempty())
{
printf("\nQueue is Empty\n");
return;
}
printf("\n Queue Elements are: ");
i=front;
do
{
printf(" %d ",queue[i]);
i=(i+1)%max;
}while(i!=(rear+1)%max);
printf("\n");
}


void dequeue()
{
if(front==-1 && rear==-1)
{
printf("\n Queue is empty\n");
return;
}
printf("\n %d is deleted\n",queue[front]);
if(front==rear)
{
front=rear=-1;
}
else
{
front=(front+1)%max;
}
}
void enqueue(int item)
{
if((rear+1)%max==front)
{
printf("Queue if full");
return;
}
if(front==-1 && rear==-1)
{
front=rear=0;
}
else{
rear=(rear+1)%max;
}
queue[rear]=item;
printf("\n element %d inserted succesfully",queue[rear]);
}

void search()
{
int key,i,found=0;
if(front==-1 && rear==-1)
{
printf("\n Queue is empty\n");
return;
}printf("\n Enter the elment to search:");
scanf("%d",&key);
i=front;
do{
if(queue[i]==key)
{
printf("Element %d found at position %d",key,i+1);
found=1;
break;
}
i=(i+1)%max;
}while(i!=(rear+1)%max);
if(!found){
printf("Element %d not found in the queue",key);
}
}

int main()
{
int choice,value;
printf("\n Circular queue using Array");
do
{
printf("\n1.Enqueue\n2.Dequeue\n3.Display\n4.Search\n5.Exit\n");
printf("Enter your choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:printf("Enter value to enqueue: ");
scanf("%d",&value); 
enqueue(value);
break;
case 2:dequeue();
break;
case 3:display();
break;
case 4:search();
break;
case 5:printf("\nExiting");
return 0;
default:printf("\nInvalid choice");
break;
}
}while(choice!=5);
return 0;
}





