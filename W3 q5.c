#include <stdio.h>
int maximum(int a[], int num)
{	
int i;	
int max = a[0];
for (i = 1; i < num; i++)	
{	
if (a[i] > max)			
max = a[i];
}
return max;
}
int main()
{
int ar[30],i,n;
 printf("enter the size of array:\n"); 
scanf("%d", &n);
printf("enter the array elements:\n"); 
for(i=0; i<n; i++) 
{ 
scanf("%d", &ar[i]); 
}
printf("The Largest element in given array is %d", maximum(ar, n));	
return 0;
}
