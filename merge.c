#include<stdio.h>
void main()
{
int a[50],b[50],c[100],m,n,i,j,k;
printf("\nEnter the size of the first array:");
scanf("%d",&m);
printf("\nEnter the elements of the first array:");
for(i=0;i<m;i++)
{
scanf("%d",&a[i]);
}
printf("\nEnter the size of the second array:");
scanf("%d",&n);
printf("\nEnter the elements of the second array:");
for(i=0;i<n;i++)
{
scanf("%d",&b[i]);
}
i=0;
j=0;
k=0;
while(i<m&&j<n)
{
if(a[i]<b[j])
{
c[k]=a[i];
k++;
i++;
}
else
{
c[k]=b[j];
k++;
j++;
}
}
while(i<m)
{
c[k]=a[i];
i++;
k++;
}
while(j<n)
{
c[k]=b[j];
k++;
j++;
}
printf("\nMerge Sort:");
for(i=0;i<n+m;i++)
{
printf("\n%d",c[i]);
}
}
