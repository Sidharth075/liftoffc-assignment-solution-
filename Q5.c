#include<stdio.h>
int main()
{
int r,d;
float c,a; 
printf("Enter the radius ofthe circle");
scanf("%d",&r);
d=r+r;
c=2*r*22/7;
a=(22 /7)*r*r;
printf("diamete is %d \n,circumference is %f \n,Area is %f",d,c,a);
return 0;
}