#include<stdio.h>
#include<string.h>
void main(){
    char str1[1000];
    char str2[1000];
printf("ENTER THE STRING 1 : ");
gets(str1);
printf("ENTER THE STRING 2 : ");
gets(str2);
int i,j,count=0;
char ch[10];
strcat(str1,str2);
char rev[1000];
printf("STRING : %s",strcat(str1,str2));
while(str1[count]!='\0'){
    count++ ;
}
j= count -1;
for( i=0;i<count;i++){
    rev[i]=str1[j];
    j--;
}
printf("\n REVERSE STRING : %s ",rev);

}
