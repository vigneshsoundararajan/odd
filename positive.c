#include <stdio.h>
void main()
{
	int num;
	printf("enter a number to be check");
	scanf("%d",&num);

	if(num<0)
	{
		printf("\n you entered number is negative");
	}

	else if(num==0)
	{
		printf("\n you entered the number is zero");
	}
	else
	{
		printf("\n you entered number is positive");
	}
}
