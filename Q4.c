#include<stdio.h>
int main()
{
int a,b,n; 
printf("Enter the two Numbers"); 
scanf("%d",&a);  
scanf("%d",&b);
printf("Enter\n 1for Sum\n 2 for subtraction\n 3 for multiplication\n 4for division\n");
 scanf("%d",&n); 
switch(n)
{
 case(1):
 printf("Sum is : %d\n",a+b);
 break; 
case(2):
 printf("substraction is : %d\n",a-b); 
break; 
case(3): 
printf("multiplication is : %d\n",a*b);
 break;
 case(4): 
printf("division is : %f\n",a/b); 
break;
}
return 0;
}