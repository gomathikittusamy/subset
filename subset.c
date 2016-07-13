#include<stdio.h>
#include<conio.h>
void main()
{
int a[100],b[100],i,j,n,m,flag;
clrscr();
printf("Enter the size of array\n");
scanf("%d",&n);
printf("Enter the size of sub array\n");
scanf("%d",&m);
if(n<m)
printf("array is not subset");
else
{
printf("Enter the element 1 by 1\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("enter the subset  element 1 by 1\n");
for(i=0;i<m;i++)
scanf("%d",&b[i]);
for(i=0;i<m;i++)
{
flag=0;
for(j=0;j<n;j++)
{
if(a[i]==b[j])
{
flag=1;
break;
}
}
if(!flag)
break;
}
if(flag)
printf("is subset");
}
getch();
}
