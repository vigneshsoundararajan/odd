#include<stdio.h>
void main()
{
	int a[50];
	int i,n,temp;
	scanf("%d",&n);
	printf("\n enter the numbers");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
            for(i=0;i<n;i++)
            {
            	if(a[i]>a[i+1])
            	{
            		temp=a[i];
            		a[i]=a[i+1];
            		a[i+1]=temp;
            	}
            	
            }
            printf("\n the max num is %d",a[i]);
}
