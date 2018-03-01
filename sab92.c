#include<stdio.h>
int main()
{
int a[10],i,sum=0,j;
scanf("%d",&j);
for(i=0;i<j;i++)
scanf("%d",&a[i]);
for(i=0;i<j;i++)
{
	sum=sum+a[i];
}
printf("sum of num= %d",sum);

return 0;
}

