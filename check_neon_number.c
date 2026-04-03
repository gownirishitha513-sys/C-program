#include<stdio.h>
int main(){
int num,square,sum=0,remainder;
printf("enter number");
scanf("%d",&num);
square=num*num;
while(square!=0){
remainder = square % 10;
sum =sum + remainder;
square = square / 10;}
if(sum == num)
printf("%d is neon number",num);
else
printf("%d is not neon number",num);
return 0;
}

