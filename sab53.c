#include <stdio.h>

int main() 
{
	int a[100],i=0,c=0,n,j,sum=0;
	scanf("%d",&n);
	while(n>0)
	{
		a[i]=n%10;
		n=n/10;
		i++;
		c++;
		
	}
	for(j=c-1;j>=0;j--)
	{
	sum=sum+a[j];	
	}
	printf("sum=%d",sum);
	return 0;
}
