#include <stdio.h>

int main() {
	int a,b,c,i;
	printf("enter a number");
	scanf("%d%d",&a,&b);
	for(i=a;i<b;i++)
	{
		if(i%2==0)
		c=i;
		printf("%d",c);
	}
	
}
