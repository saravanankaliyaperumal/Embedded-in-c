#include<stdio.h>
void main()
{
	int num,i,j,s,k;
	printf("enter the number\n");
	scanf("%d",&num);
	printf("\n");
	for(i=0;i<num;i++)
	{
		k=1;
		for(s=0;s<num-i-1;s++)
		printf("  ");
			for(j=0;j<(2*i)+1;j++)
				printf("%d ",k++);
			printf("\n");
	}
}