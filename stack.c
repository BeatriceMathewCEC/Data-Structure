#include<stdio.h>
#define max 10
int stack[max];
int top=-1;
void push(int item)
{
if(top==max-1)
{
printf("\nStack Overflow");
return;
}
stack[++top]=item;
printf("\n %d pushed to stack",item);
}
void pop()
{
if(top==-1)
{
printf("\n stack underflow");
return;
}
printf("%d is popped from stack.\n",stack[top--]);
}
void peek()
{
if(top==-1)
{
printf("\n stack is empty");
return;
}
printf("\n Top element is %d\n",stack[top]);
}
void display()
{
if(top==-1)
{
printf("\n stack is empty");
return;
}
printf("\nStack elements are:");
for(int i=top;i>=0;i--)
{
printf("\n%d",stack[i]);
}
}
int main()
{
int choice,value;
while(1)
{
printf("\n \nStack operation Menu:");
printf("\n 1.push");
printf("\n 2.pop");
printf("\n 3.peek");
printf("\n 4.display");
printf("\n 5.Exit");
printf("\nEnter Your choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:printf("\n Enter value to push:");
scanf("%d",&value);
push(value);
break;
case 2:pop();
break;
case 3:peek();
break;
case 4:display();
break;
case 5:printf("\n Exiting Program");
return 0;
default:printf("\n Invalid Choice!");
}
}
return 0;
}

