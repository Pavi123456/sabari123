#include <stdio.h>
int main()
{
int a[5],i,j,temp=0;
for(i=0;i<5;i++)
scanf("%d",&a[i]);
for(i=0;i<4;i++)
{
	for(j=i+1;j<5;j++)
	
	{
		if(a[i]<a[j])
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
}


printf("%d\t",a[4]);
printf("%d",a[0]);


	return 0;
}
