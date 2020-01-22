#include<stdio.h>
int main()
{
char str[100],a[100],l=0,i;
scanf("%[^\n]",str);
for(i=0;str[i]!='\0';i++)
{
l++;
}
printf("%d",l);
for(i=l-1;i>=0;i--)
{
printf("%c",str[i]);
}
}
