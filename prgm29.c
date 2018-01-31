#include <stdio.h>

int main() 
{
	int a,hr,mins;
	scanf("%d",&a);
	hr=a/60;
	printf("hrs are%d",hr);
	mins=a%60;
	printf("mins are %d",mins);
	return 0;
}
