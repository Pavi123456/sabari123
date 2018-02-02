#include <stdio.h>

int main(void)
{
int i,avg=1,sum=0,a[5];

for(i=0;i<5;i++)
scanf("%d",&a[i]);
for(i=0;i<5;i++)
{
	sum=sum+a[i];
	
	
}
avg=sum/5;
printf("avg= %d",avg);
	return 0;
}
