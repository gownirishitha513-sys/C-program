#include<stdio.h>
int main(){
int base,exponent,i;
long long result=1;
printf("enter base");
scanf("%d",&base);
printf("enter exponent");
scanf("%d",&exponent);
for(i=1;i<=exponent;i++){
result=result*base;
}
printf("power=%lld",result);
return 0;
}