#include<stdio.h>
int main()
{
int a[10][10],i,j,n,fs=0,rs=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
}
}
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(i==j)
{
fs=fs+a[i][j];
}
if(i+j==n-1)
{
rs=rs+a[i][j];
}
}
}
printf("%d",fs-rs);
}
