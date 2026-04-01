#include<stdio.h>
int main(){
int binary=0,decimal,base=1,remainder;
printf("enter decimal number");
scanf("%d",&decimal);
while(decimal!=0){
remainder=decimal%2;
binary=binary+remainder*base;
base=base*10;
decimal=decimal/2;
}
printf("binary=%d",binary);
return 0;
}