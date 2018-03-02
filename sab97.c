#include <stdio.h>

int main()
{
    
    int n,b=0,c=0;
    scanf("%d",&n);
    while(n!=0)
    {
        b=n%10;
        c=c*10+b;
        n=n/10;
    }
    printf("reverse= %d",c);
    return 0;
}



