#include<stdio.h>
int main()
{
int a,n,s=0,rem;
printf("\n enter a number:\t");
scanf("%d",&a);
n=a;
while(a!=0)
{
rem=a%10;
s=s+(rem*rem*rem);
a=a/10;
}
if(s==n)
{
printf("/n %d is an amstrong integer /n",n);
}
else
{
printf("/n %d is not a amstrong integer /n",n);
}
return 0;
}
