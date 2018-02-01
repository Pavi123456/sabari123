#include <stdio.h>
#include<string.h>
int main(void)
{
int k,i;
char a[1000];
scanf("%d",&k);
gets(a);
for(i=1;i<=k;i++)
{
	printf("%s",a);
}
	return 0;
}
