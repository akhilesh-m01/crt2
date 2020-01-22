#include<stdio.h>
int main()
{
char str[100];
int i,j;
scanf("%[^\n]",str);
for(i=0;str[i]!='\0';i++)
{
if(str[i]==' ')
{
for(j=i-1;str[j]>='0';j--)
{
if(str[j]!=' ')
{
printf("%c",str[j]);
}
else
{
break;
}
}
printf(" ");
}
}

for(j=i-1;str[j]!=' ';j--)
{
printf("%c",str[j]);
}
}


