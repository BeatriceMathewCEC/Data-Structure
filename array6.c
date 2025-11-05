#include<stdio.h>
void main()
{
int a[50],i,n,key,flag=0;
printf("Enter the limit: ");
scanf("%d",&n);
printf("Enter the array elements:\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Enter the key element: ");
scanf("%d",&key);
for(i=0;i<n;i++)
{
if(a[i]==key)
{
printf("in %d found at %d",key,i+1);
flag=1;
break;
}
}
if(flag==0)
printf("\nsearch unsuccessfully ");
}


