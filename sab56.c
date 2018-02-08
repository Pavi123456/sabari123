#include<stdio.h>
int main()
{
char a[100];
int i,n,count=0,flag=0;
gets(a);

for(i=0;i<=100;i++)
{
if((a[i]>='A'&&a[i]<='Z')||(a[i]>='a'&&a[i]<='z'))
{
count++;
}
if(a[i]>='0'&&a[i]<='9')
{
flag++;
}
}
if(count>0&&flag>0)
{
printf("\n Both alphabets and numbers");
}
else
{
printf("\n Not both alphabets and numbers");
}
}
