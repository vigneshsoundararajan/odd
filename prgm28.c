#include<stdio.h>
int main()
{
int num,a[15],i;
printf("enter the numbers");
printf("Enter the integers");
scanf("%d",&num);
for(i=0;i<num;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<num;i++)
{
printf("index is%d\t%d\n",a[i],i);
}
return 0;
}
