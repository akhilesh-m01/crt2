//to CONVERT BIG TO small and vice versa
#include<stdio.h>
int main()
{
char str[100];
int i,s=0;
scanf("%[A-Za-z]",str);
for(i=0;str[i]!='\0';i++)
{
if(str[i]>=65 && str[i]<=90)
{
str[i]=str[i]+32;
}
else
{
str[i]=str[i]-32;
}
}
printf("%s",str);
}
