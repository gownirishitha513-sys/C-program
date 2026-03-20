#include<stdio.h>
int main(){
int a,b;
printf("enter a,b");
scanf("%d%d",&a,&b);
if(a>b){
printf("largest number is %d",a);}
 else if(a<b){
 printf("largest number is %d",b);}
 else {
 printf("both are equal");}
 return 0;
 }