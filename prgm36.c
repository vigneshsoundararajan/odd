#include<stdio.h>
#include<string.h>
void main()
{
	int i,c=0,b,count=0,splfun=0;
	char a[200];
	printf("\nEnter character");
	scanf("%s",&a);
	b=strlen(a);
for(i=0;i<b;i++)
{
	if(a[i]>='0'&&a[i]<='9')
	{
	
	 c++;
    }   
    else if((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z'))
    {
    	count++;
	}
	else
	{
		splfun++;
	}
}
printf("\nspecial function: %d",splfun);
}
