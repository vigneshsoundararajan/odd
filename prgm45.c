#include<stdio.h>
void main()
{
	char a[10];
	int i,count=1;
	printf("\n enter the numbers");
	scanf("%s",a);
	for(i=1;a[i]!='\0';i++)
	if(a[i]>='0' && a[i]<='9')
	{
		count=count+1;
	}
 printf("\n %d",count);
}
