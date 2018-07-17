#include<stdio.h>
#include<string.h>

int main() {
	char a[1000][100];
	int i,t,count=0,b[100],c[100]=0,k;
	scanf("%d",&t);
    for(i=0;i<t;i++)
    scanf("%s",&a[i]);
    for(i=0;i<t;i++)
    {
    printf("\n%s",a[i]); b[i]=strlen(a[i]);
    
    }
    for(i=0;i<t;i++)
    {
    for(j=0;j<b[i];j++)
    {
     for(k=j+1;k<b[i];k++) 
     {
         
    }
        
    }
    
            return 0;
}
