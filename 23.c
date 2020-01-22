#include<stdio.h>
int main()
{
char str[100],l=0,i;
scanf("%[^\n]",str);
for(i=0;str[i]!='\0';i++)
{
l++;
}
printf("%d",l);
}
