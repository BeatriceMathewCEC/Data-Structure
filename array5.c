#include<stdio.h>
void main()
{
int a[50],n,i,p,item;
printf("Enter the limit: ");
scanf("%d",&n);
printf("Enter the elements:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Enter the position: ");
scanf("%d",&p);
n=n-1;
item=a[p-1];
printf("The deleted elements is %d",item);
for(i=p-1;i<=n;i++)
{
a[i]=a[i+1];
}
printf("\nthe new array is: ");
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
}
}

