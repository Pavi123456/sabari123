#include<stdio.h>
int main()
{
char a[1000];
int count=0,i;
scanf("%s",&a);
for(i=0;a[i]!=NULL;i++)
{
if(a[i]==' ')
{
count++;
}
}
printf("%d",count);
return 0;
}
