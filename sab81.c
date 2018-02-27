#include <stdio.h>
int main() 
{
	int a,b,i;
	//a=no of warrior in kabali clan; b=no of opponent;
	for(i=0;i<32;i++)
	{
		scanf("%d%d",&a,&b);
	}
	printf("\ndiff is %d",b-a);
	return 0;
}
