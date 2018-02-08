#include <stdio.h>
int main(void)
{
int a,i,f=0,s=1,sum=0;
scanf("%d",&a);
printf("%d\t%d",f,s);
for(i=0;i<a;i++)
{
	sum=f+s;
	f=s;
	s=sum;
	printf("\t %d",sum);
}	return 0;
}
