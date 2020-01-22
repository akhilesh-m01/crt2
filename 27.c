//to sum the numbers in the string
#include<stdio.h>
int main()
{
char str[100];
int i,s=0;
scanf("%[A-Za-z0-9]",str);
for(i=0;str[i]!='\0';i++)
{
if(str[i]>=48 && str[i]<=57)
{
s=s+str[i]-48;
}
}
printf("%d",s);
}
