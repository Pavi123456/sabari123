#include <stdio.h>
#include<string.h>
int main(void)
{
	char a[100];
	int i,k;
	gets(a);
	scanf("%d",&k);
	for(i=0;i<k;i++)
	printf("%c",a[i]);

	return 0;
}
