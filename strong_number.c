#include<stdio.h>
int main(){
int num,original,remainder,i;
int sum=0,fact=1;
printf("enter number");
scanf("%d",&num);
original=num;
while(num!=0){
remainder=num%10;
fact=1;
for(i=1;i<=remainder;i++){
fact=fact*i;
}
sum=sum+fact;
num=num/10; 
}
if(sum==original)
printf("strong number");
else
printf("not a strong number");
return  0;
}