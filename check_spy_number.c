#include<stdio.h>
int  main(){
int num,temp,digit;
int sum=0,product=1;
printf("enter number");
scanf("%d",&num);
temp=num;
while(temp!=0){
digit=temp%10;
sum+=digit;
product*=digit;
temp=temp/10;
}
if(sum==product)
printf(" %d is a spy number",num);
else
printf(" %d is not a spy number",num);
return 0;
}


