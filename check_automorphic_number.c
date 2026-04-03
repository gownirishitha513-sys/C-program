#include<stdio.h>
int main(){
int num,square,temp,digits=0;
printf("enter number");
scanf("%d",&num);
square=num*num;
temp=num;
while(temp!=0){
digits++;
temp=temp/10;
}
int divisor=1;
for(int i=0;i<digits;i++){
divisor=divisor*10;
}
if(square % divisor == num){
printf("%d  is an automorphic number",num);}
else
printf("%d is not an automorphic number",num);

return 0;
}


