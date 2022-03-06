#include<stdio.h>
void main(){
   int arr[10];
   int sumo=0;
   int sume=0;
   for(int i=1;i<=10;i++){
       printf("ENTER THE ELEMENTS : ");
       scanf("%d",&arr[i]);
       
   }
   for(int i=1;i<=10;i++){
printf("%d\t",arr[i]);  
   }
   
   for(int i=1;i<=10;i++){
       if(arr[i]%2==0){
           sume+=arr[i];
       }
       else {
           sumo+=arr[i];
       }
   }
   printf("\nTHE SUM OF ODD NUMBERS IS : %d",sumo);
   printf("\nTHE SUM OF EVEN NUMBERS IS : %d",sume);
}
