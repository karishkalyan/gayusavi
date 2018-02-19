#include<stdio.h>
void main()
{
int a[10],i,large,small,i,n;
printf("\n enter the number of elements:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
large=small=a[0];
for(i=0;i<n;i++)
{
if(a[i]>large)
large=a[i];
if(a[i]<small)
small=a[i];
}
printf("\n the greatest is :%d",large);
printf("\n the smallest is :%d",small);
getch();
}

