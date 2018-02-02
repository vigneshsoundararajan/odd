#include<stdio.h>
#include<conio.h>
void main()
{
int time1,time2,sec1,sec2,min1,min2;
printf("\n enter the time");
scanf("%d%d",&min1,&sec1);
printf("\n enter the time2");
scanf("%d%d",&min2,&sec2);
time1=min1-min2;
time2=sec1-sec2;
printf("\n diff of time is %d:%d",time1,time2);
}
