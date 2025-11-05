#include<stdio.h>
void main()
{
int a[50],i,n,temp,j;
printf("Enter the limit: ");
scanf("%d",&n);
printf("Enter the array element:\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n-1;i++)
{
for(j=0;j<n-i-1;j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
printf("The new Sorted array is:\n");
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
}
}
