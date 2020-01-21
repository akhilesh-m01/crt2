#include<stdio.h>
int main()
{
int a[100],n,i,x1,x2,x,j;
scanf("%d",&n);
a[0]=0;
a[1]=1;
x1=0;
x2=1;
for(i=2;i<n;i++)
{
a[i]=x1+x2;
x1=x2;
x2=a[i];
}
for(j=n-1;j>=0;j--)
printf("%d ",a[j]);
}
