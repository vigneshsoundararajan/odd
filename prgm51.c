
#include<stdio.h>
int main(void) {
	int i,n;
	char a[10];
	scanf("%s",a);
	n=strlen(a);
	for(i=0;i<n;i++)
	{
		printf("\n %c",a[i]);
	}
	return 0;
}
