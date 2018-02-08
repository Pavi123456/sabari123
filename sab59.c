#include<stdio.h>
int main()
{
	int num[10],i,max=0;
	for(i=1;i<=10;i++)
	{
		scanf("%d",&num[i]);
	}
	for(i=0;i<9;i++)
	{
		if(num[i]>max)
		{
			max=num[i];
		}
	}
	printf("%d",max);
	return 0;
}
