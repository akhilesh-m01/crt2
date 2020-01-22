//to CHAR COUNT
#include<stdio.h>
int main()
{
char str[100];
int i,s=0,j,b=0,sp=0,d=0;
scanf("%[a-zA-Z0-9]",str);
for(i=0;str[i]!='\0';i++)
{
if(str[i]>=65 && str[i]<=90)
{
b++;
}
else if(str[i]>=97 && str[i]<=122)
{
s++;
}
else if(str[i]>=48 && str[i]<=57)
{
d++;
}
else if((str[i]>=0 && str[i]<=47)||(str[i]>=123 && str[i]<=127))
{
sp++;
}
}
printf("s=%d,b=%d,d=%d,sp=%d",s,b,d,sp);

}

