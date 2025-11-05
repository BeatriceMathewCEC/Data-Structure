#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node*link;
};
struct node *head=NULL;


void insertfirst()
{
struct node *newnode;
newnode=(struct node*)malloc(sizeof(struct node));
if(newnode==NULL)
{
printf("\n No Space available");
return;
}
newnode->link=NULL;
printf("\nEnter the value to insert to front: ");
scanf("%d",&newnode->data);
if(head==NULL)
{
head=newnode;
}
else{
newnode->link=head;
head=newnode;
}
printf("\nElement inserted %d",newnode->data);
}


void insertlast()
{
struct node *newnode,*temp=head;
newnode=(struct node*)malloc(sizeof(struct node));
if(newnode==NULL)
{
printf("\n No Space available");
return;
}
newnode->link=NULL;
printf("\nEnter the value to insert to last: ");
scanf("%d",&newnode->data);
if(head==NULL)
{
head=newnode;
}
else{
while(temp->link!=NULL)
{
temp=temp->link;
}
temp->link=newnode;
}
printf("\nElement inserted  successfully %d",newnode->data);
}


void insertlocation()
{
int key;
struct node *newnode,*temp=head;
newnode=(struct node*)malloc(sizeof(struct node));
if(newnode==NULL)
{
printf("\n No Space available");
return;
}
newnode->link=NULL;
if(head==NULL)
{
printf("\nlist is empty");
}
else{
printf("Enter the key where after you want to add element: ");
scanf("%d",&key);
while(temp->data!=key && temp!=NULL)
{
temp=temp->link;
}
if(temp==NULL)
{
printf("\nvalue not exist");
}
else{
printf("\nEnter the element to inserted: ");
scanf("%d",&newnode->data);
newnode->link=temp->link;
temp->link=newnode;
printf("\nvalue inserted successfullt %d", newnode->data);
}
}
}


void deletefirst()
{
if(head==NULL)
{
printf("\nlist Empty"); 
return;
}
struct node *temp=head;
head=temp->link;
printf("\nValue deleted %d\n",temp->data);
free(temp);
}


void deletelast()
{
if(head==NULL)
{
printf("\nlist Empty"); 
return;
}
struct node *temp=head, *prev=NULL;
if(temp->link==NULL)
{
printf("\n Value %d deleted ",temp->data);
free(temp);
head=NULL;
return;
}
while(temp->link!=NULL){
prev=temp;
temp=temp->link;
}
printf("value %d deleted",temp->data);
prev->link=NULL;
free(temp);
}



void deletelocation()
{
int key;
struct node *temp=head, *prev=NULL;
if(head==NULL)
{
printf("\nlist Empty"); 
return;
}
printf("\nEnter the key where after you want to delete element: ");
scanf("%d",&key);
if(temp->data==key)
{
head=temp->link;
printf("\nValue  %d is deleted",temp->data);
free(temp);
return;
}
while(temp!=NULL &&temp->data!=key)
{
prev=temp;
temp=temp->link;
}
if(temp==NULL)
{
printf("\nValue not Exsist\n");
return;
}
prev->link=temp->link;
printf("value %d is deleted",temp->data);
free(temp);
}



void search()
{
struct node *temp=head;
int pos=0,found=0,val;
if(head==NULL)
{
printf("\nlist Empty"); 
return;
}
printf("\nEnter the value to search: ");
scanf("%d",&val);
while(temp!=NULL){
if(temp->data==val)
{
printf("\n%d value found at %d location\n",temp->data,pos+1);
found=1;
}
pos++;
temp=temp->link;
}
if(!found)
{
printf("value %d not Exsist",val);
}
}


void display()
{
struct node *temp=head;
if(temp==NULL)
{
printf("\n Empty list");
return;
}
printf("\nElements in the list\n");
while(temp!=NULL)
{
printf(" %d ",temp->data);
temp=temp->link;
}
}

void main()
{
int choice;
printf("\nSingly linked list\n");
do{
printf("\n1.InsertFirst\n2.InsertLast\n3.InsertLocation\n4.DeleteFirst\n5.DeleteLast\n6.DeleteLocation \n7.Display\n8.Search\n9.Exit");
printf("\nEnter choice: ");
scanf("%d",&choice);
switch(choice)
{
case 1:insertfirst();
break;
case 2:insertlast();
break;
case 3:insertlocation();
break;
case 4:deletefirst();
break;
case 5:deletelast();
break;
case 6:deletelocation();
break;
case 7:display();
break;
case 8:search();
break;
case 9:printf("\nExiting");
exit(0);
default:printf("\n Invalid Choice");
break;
}
}while(choice!=9);
}



