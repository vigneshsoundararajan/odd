#include<stdio.h>
void main()
{
	int a,b;
	printf("\n enter two number");
	scanf("%d%d",&a,&b);
	a=a^b;
	b=a^b;
	a=a^b;
	printf("\n the values are %d %d",a,b);
}
