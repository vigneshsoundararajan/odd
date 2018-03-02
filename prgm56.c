#include<stdio.h>
#include<string.h>
void main()
{
	char a[50];
	int i,m;
	int alp=0,num=0;
	printf("\n enter the string");
	scanf("%s",a);
	m=strlen(a);
	for(i=1;i<=m;i++)
	{
		if(('a'<=a[i]&&'z'>=a[i])||('A'<=a[i]&&'z'>=a[i]))
		{
			alp=1;
		}
		if('0'<=a[i]&&'1'>=a[i])
		{
			num=1;
		}
	}
	if(num==1&&alp==1)
	{
		printf("\n yes");
		
	}
	else
	{
		printf("\n no");
	}
}
