#include<stdio.h>
void main()
{
  int count=0,len,i;
  char a[10000];
  printf("\nenter the paragraph :");
  gets(a);
  len=strlen(a);
  for(i=0;i<=len;i++)
  {
    if(isdigit(a[i])==1)
    count++;
  }
  printf("\nthe no.of digits :%d",count);
}
