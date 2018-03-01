#include <stdio.h>
#include<string.h>

int main(void)
{
	char a[100];
	int b,i;
	gets(a);
	b=strlen(a);
	for(i=0;a[i]!=NULL;i++)
	{
		if(a[i]>='0'&&a[i]<='9')
		printf("%c",a[i]);
		
	}
	

             return 0;
}
