#include<stdio.h>
int main()
{
int n,fact,i;
printf("enter the number");
scanf("%d"&n);
if(n<=0)
{
fact=1;
}
else
for(i=1;i<=n;i++)
{
fact=fact*i;
  printf("%d",fact);
}
 return 0;
}
