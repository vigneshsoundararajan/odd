#include<stdio.h>
void main()
{
int i,count;
char str[50];
printf("\n enter the string");
scanf("%s",str);
while(str[50]!='\0')
{
if(str[i]!=' '&&str[i]!='\t'&&str[i]!='\n')
count++;
i++;
}
printf("\n the count of the string is %d",count);
}
