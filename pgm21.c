#include<stdio.h>
int main()
{
	int num,tot,dif,sum=0,temp,i;
	scanf("%d%d%d",&n,&k,&dif);
	for(i=0;i<num;i++)
	{
		temp=sum+tot;
		sum=temp;
		tot=tot+dif;
	}
	printf("%d",temp);
	return 0;
  }
