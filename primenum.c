#include <stdio.h> 
void main() 
{
int n, i, count = 0;
scanf("%d", &n);
printf("enter any number :%d\n",n);
for (i = 1; i <= n; i++) 
{
if (n % i == 0) 
{
count++;
}
}
if (count == 2)
{
printf("yes");
}
else 
{
printf("no");
}
}
