#include<stdio.h>
void main()
{
int a[]={76,30,40,100,10,20,60,70,80,44,90};
int i,n,j,temp;
n=sizeof a/sizeof a[0];
for(i=0;i<n;i++)
        printf("%d ",a[i]);
printf("\n");
for(i=0;i<n-1;i++)
{
        temp=0;
        for(j=i+1;j<n;j++)
        {
                if(a[i]>a[j])
                {
                        temp=a[i];
                        a[i]=a[j];
                        a[j]=temp;
                }
        }
}
for(i=0;i<n;i++)
        printf("%d ",a[i]);
printf("\n");
}
