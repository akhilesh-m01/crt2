#include<stdio.h>
int main()
{
char str[100];
int i,j,l=0;
scanf("%[^\n]",str);
for(i=0;str[i]!='\0';i++)
{
l++;
}
for(i=l-1;i>=-1;i--)
{
if(str[i]==' '|| i==-1)
{
for(j=i+1;str[j]!='\0';j++)
{
if(str[j]!=' ')
printf("%c",str[j]);
else
break;
}
printf(" ");
}
}
return 0;
}




