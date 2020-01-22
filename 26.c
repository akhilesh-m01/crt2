//to check whether the string is palindrome or not
#include<stdio.h>
#include<string.h>
int main()
{
char str[100],l=0,i,j,flag=0;
scanf("%[^\n]",str);
for(i=0;str[i]!='\0';i++)
{
l++;
}
i=0;
j=l-1;
//comparing the 1st and end of the string and vice versa
while(i<=j)
{
if(str[i]!=str[j])
{
flag=1;
break;
}
i++;
j--;
}
if(flag==0)
{
printf("%s is palindrome",str);
}
else
{
printf("%s is not a palindrome",str);
}
}
