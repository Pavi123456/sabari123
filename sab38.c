#include <stdio.h>
int main() 
{
int a=16;
int b=77;
printf("%d%d",a,b);
a= a ^ b;
b= a ^ b;
a= a ^ b;
printf("%d%d",a,b);
return 0;
}
