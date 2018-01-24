#include <stdio.h>

int main() {
	int num,fact=1,i;
	printf("\n enter a number");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		fact=fact*i;
	}
		printf("\n the factorial of number is %d", fact);
	
	return 0;
}
