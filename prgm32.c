#include<stdio.h>
int main()
{
int i,count=0;
char str[50];
gets(str[50]);
for(i=0;str[i]!='\0';i++)
{
if(str[i]==' ')
{
count++;
}
}
printf("%d",count+1);
return 0;
}
