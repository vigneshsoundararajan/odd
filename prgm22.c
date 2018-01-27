#include<stdio.h>
int main()
{
int a[100],n,m,i;
printf("Enter the total numbers");
scanf("%d",&n);
printf("\nEnter the numbers");
for(i=1;i<=n;i++)
{
scanf("%d",&a[i]);
printf("\t%d",a[i]);
}
m=a[0];
for(i=0;i<=n;i++)
{
if(a[i]>m)
{
m=a[i];
}
}
printf("\n maximum element is %d",m);
return 0;
}
