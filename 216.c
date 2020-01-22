#include<stdio.h>
int m,n,i,j;
int read(int a[10][10],int m,int n)
{
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
}
}
}
int print(int a[10][10],int m,int n)
{
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("%d",a[i][j]);
}
printf("\n");
}
}

int add(int a[10][10],int b[10][10],int m,int n)
{
int s[10][10];
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
s[i][j]=a[i][j]+b[i][j];
printf("%d\t",s[i][j]);
}
printf("\n");
}
}
int mul(int a[10][10],int b[10][10],int m,int n,int p,int q)
{
int mul[10][10],k;
for(i=0;i<m;i++)
{
for(j=0;j<q;j++)
{
mul[i][j]=0;
}
}
for(i=0;i<m;i++)
{
for(j=0;j<q;j++)
{
for(k=0;k<n;k++)
{
mul[i][j]+=a[i][k]*b[k][j];
printf("%d ",mul[i][j]);
}
}
printf("\n");
}
}
int main()
{
int a[10][10],b[10][10],m,n,p,q,i,j;
scanf("%d%d%d%d",&m,&n,&p,&q);
read(a,m,n);
print(a,m,n);
read(b,m,n);
print(b,m,n);
//add(a,b,m,n);
if(n==p)
mul(a,b,m,n,p,q);
}



