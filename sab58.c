#include <stdio.h>
int main()
{
	int a,b;
	printf("enter the numbers\n");
	scanf("%d %d",&a,&b);
	printf("%d %d\n",a,b);
	a=a^b;
	b=a^b;
	a=a^b;
	printf("%d\t%d",a,b);
	return 0;
}
