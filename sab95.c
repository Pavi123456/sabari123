#include <stdio.h>

int main()
{
    int a,r,t;
    float i;
     printf(" enter amt rate time ");
     scanf("%d%d%d",&a,&r,&t);
     i=(r*t*a)/100;
     printf("interest= %f",i);

    return 0;
}
