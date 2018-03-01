#include<stdio.h>
int main()
{
float tsa,v,l,b,w;
printf("Enter the Breadth , length , Width : ");
scanf("%f\t%f\t%f",&b,&l,&w);
tsa=(2*(l*b+l*w+b*w));
v=(l*b*w);
printf("\nTotal Surface Area of a Cuboid : %f",tsa);
printf("\nVolume of a Cuboid : %f",v);
return 0;
}
