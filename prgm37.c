#include<stdio.h>
void main()
{
 int a,b;
 printf("\n enter the two numbers");
 scanf("%d%d",&a,&b);
printf("\n before swapping the values of a and b are %d %d",a,b);
a=a+b;
b=a-b;
a=a-b;
printf("\n after swapping the values of a and b are %d %d",a,b);
}
