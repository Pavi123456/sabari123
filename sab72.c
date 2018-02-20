#include <stdio.h>
#include<string.h>
int main()
{
	char b[100];
	int i,count=0;
	scanf("%s",&b);
	for(i=0;i<=100;i++)
	{
	if(b[i]=='a'||b[i]=='e'||b[i]=='i'||b[i]=='o'||b[i]=='o'||b[i]=='u')
	count++;
	}
	if(count>0)
	printf("yes");
	else
	printf("no");
	return 0;
}
