#include<stdio.h>
void main()
{
	int a[50];
	int i,n;
	printf("\n enter the size of the array");
	scanf("%d",&n);
	printf("\n enter the elment in the array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int max=a[0];
	int min=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
		if(a[i]<min)
		{
			min=a[i];
		}
	}
	printf("\n the highest element is %d",max);
	printf("\n the lowest elements is %d",min);
}
