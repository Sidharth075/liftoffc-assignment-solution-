#include <stdio.h>

void swap(int c, int d)
{
 int i;

 i = c;
 c = d;
 d = i;
    printf("your number after swapping: %d, %d" ,c,d);
  }

int main()
{
 int a, b;
 printf("enter a and b:\n");
 scanf("%d %d", &a, &b);
 swap(a, b);
return 0;
}
