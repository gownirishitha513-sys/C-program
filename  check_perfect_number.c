#include<stdio.h>
int main(){
int num,i,sum=0;
printf("enter number");
scanf("%d",&num);
for(i=0;i<num;i++){
if(num%i==0){
sum=sum+i;
}}
if(sum==num)
printf("perfect number");
else
printf("not perfect number");
return 0;
}