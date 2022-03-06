#include<stdio.h>
void main(){
     int a,b,c,i,n;
     a=0,b=1;
     printf("ENETR THE TIMES TO GENERATE THE SERIES: ");
     scanf("%d",&n);
     printf("\n FIBBONACCI SEQUENCE : ");
     printf("%d\t%d\t",a,b);
     for(int i=0;i<n;i++){
         c=a+b;
         a=b;
         b=c;
         printf("%d\t",c);
     }
}
