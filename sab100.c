#include <stdio.h>

int main()
{
    int a,temp=1,b=1;
    scanf("%d",&a);
    while(a!=0) 
    {
     temp=a%10;
     b=b*temp;
     a=a/10;
    }
    printf("product = %d",b);
    return 0;
}
