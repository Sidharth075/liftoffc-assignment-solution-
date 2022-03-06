#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main(){
    int num,last,first,temp,swap,count=0;
    printf("ENTER ANY NUMBER : ");
    scanf("%d",&num);
    temp=num;
    last=temp%10;
    count=(int)log10(temp);
    while(temp>=10){
        temp/=10;
    }
    first=temp;
    swap=(last*pow(10,count)+first)+(num-(first*pow(10,count)+last));
    printf("LAST DIGIT: %d\n",last);
    printf("FIRST DIGIT: %d\n",first);
    printf("%d is swapped to %d\n",num,swap);
 
    
}
