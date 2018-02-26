#include<stdio.h>
void main()
{
	int a[50];
	int i,n,sum=0,avg;
	printf("\n enter the size of the array");
	scanf("%d",&n);
	printf("\n enter the elment in the array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	avg=sum/n;

	printf("\n avg is %d",avg);
}
