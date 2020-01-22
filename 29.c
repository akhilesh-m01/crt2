//to CHAR COUNT
#include<stdio.h>
int main()
{
char str[100];
int i,s,j;
scanf("%[a-z]",str);
for(i=0;str[i]!='\0';i++)
{
s=1;
for(j=i+1;str[j]!='\0';j++)
{
if(str[i]==str[j])
{
s++;
str[j]='@';
}
}
if(str[i]!='@')
{
printf("%c%d\n",str[i],s);
}
}

}
