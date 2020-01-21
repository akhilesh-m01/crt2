#include<stdio.h>
int main()
{
int n,a[100],i=0,j;
scanf("%d",&n);
while(n!=0)
{
a[i]=n%10;
i++;
n=n/10;
}
for(j=i-1;j>=0;j--)
{
printf("%d",a[j]);
}
}
