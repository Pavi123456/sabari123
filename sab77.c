#include <stdio.h>
int main()
{
	
int a,i,b;
scanf("%d",&a);
for(i=1;i<=a;i++)
{
  if((b=a%i)==0)
  printf("\t%d",i);
   
   
}
	return 0;
}
