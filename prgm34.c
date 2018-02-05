#include<stdio.h>
void main()
{
int i,count=0;
char a[50];
printf("\n enter the sentence");
scanf("%c",a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]=='.')
{
count++;
}
printf(" %d",count);
}
}
