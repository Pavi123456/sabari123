#include<stdio.h>
int main()
{
	int a,i,count=0,sum;
	scanf("%d",&a);
	for(i=2;i<=a;i++)
	{
		sum=a%i;
		if(sum==0)
		count++;
		
		
	}
	if(count>1)
	printf("not prime");
	else
	printf("prime");
	return 0;
}
