#include <stdio.h>
int main()
{
	int a,b,c;
	printf("enter the numbers\n");
	scanf("%d %d",&a,&b);
	printf("%d %d\n",a,b);
	c=a;
	a=b;
	b=c;
	printf("%d\t%d",a,b);
	return 0;
}
