#include<stdio.h>
void main()
{
int a,b,num;
printf("\n enter the  two number");
scanf("%d%d",&a,&b);
num=a*b;
if(num%2==0)
{
printf("\n %d is even number",num);
}
else
{
	printf("\n %d is odd number",num);
}

}
