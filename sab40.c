#include<stdio.h>
int main()
{
int n1=0,n2=1,i,a,sum=0;
scanf("%d",&a);
printf("%d\n%d",n1,n2);
for(i=2;i<=a;i++)
{
	sum=n1+n2;
	n1=n2;
	n2=sum;
	printf(" fib series is: \n%d",sum);
}
return 0;
}
