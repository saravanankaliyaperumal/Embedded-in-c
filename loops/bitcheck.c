#include<stdio.h>
void main()
{
int num,pos,i;
printf("enter the number:\n");
scanf("%d",&num);
for(i=31;i>=0;i--)
printf("%d",num>>i&1);
printf("\n");
printf("enter the position\n");
scanf("%d",&pos);
num&(1<<pos)?puts("set"):puts("clear");
}

