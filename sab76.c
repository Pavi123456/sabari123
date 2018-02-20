#include <stdio.h>
int main()
{
	
int a,i,count=0;
scanf("%d",&a);
for(i=1;1<=a;i++)
{
	if((a%i)==0)
	count++;
}
if(count>2)
printf("composite");
else
printf("not composite");
	return 0;
}
