#include<stdio.h>
int main()
{
int a,b;
printf("Enter a numbers\n");
scanf("%d",&a);
b=a%2;
switch(b)
{
case 0:
printf("%d is even number",a);
break ;
default:
printf("%d is odd number",a);
}
return 0;
}