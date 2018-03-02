#include <stdio.h>

int main()
{
     int a[100],n,i;
     printf("enter limit");
    scanf("%d",&n);
    printf("enter num");
    for(i=1;i<=n;i++)
    scanf("%d",&a[i]);
    for(i=1;i<=n;i++)
    {
        if(a[i+1]!=a[i]+1)
        {
             printf("changed num %d",a[i]+1);
        break;
        }
        
        }
    return 0;
}
