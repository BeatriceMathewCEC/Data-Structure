#include<stdio.h>
void main()
{
int a[50],i,n,p,item;
printf("enter the limit: ");
scanf("%d",&n);
printf("Enter the array elements:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Enter the Position: ");
scanf("%d", &p);
printf("Enter the new element: ");
scanf("%d",&item);
n=n+1;
for(i=n;i>=p-1;i--)
{
a[i+1]=a[i];
}
a[p-1]=item;
printf("The new array: ");
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
}
}

