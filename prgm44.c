#include <stdio.h>

int main(void) {
  int n,i;
  printf("\n enter a number");
  scanf("%d",&n);
  for(i=1;i<=10;i++)
  {
  	if(i==n)
  	{
  		printf("\n yes");
  	}
  }
	return 0;
}
