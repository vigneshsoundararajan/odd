#include<stdio.h>
#include<string.h>
void main()
{
	char len1[50],len2[50];
	printf("\n enter the first string");
	scanf("%s",&len1);
	printf("\n enter the second string");
	scanf("%s",&len2);
	if(len1>len2)
	{
		printf("\n the greater string is %s",len1);
	}
	else
	{
		printf("\n enter the greater is %s",len2);
	}
}
