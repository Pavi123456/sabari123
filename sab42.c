#include <stdio.h>
#include<string.h>
int main(void)
{
	char a[1000],b[1000];
	gets(a);
	gets(b);
	if(a<b)
	printf("%s",a);
	else
	printf("%s",b);
	return 0;
}
