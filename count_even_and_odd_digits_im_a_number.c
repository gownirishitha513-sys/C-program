#include<stdio.h>
int main(){
int digit,number;
int evencount=0,oddcount=0;
printf("enter number:");
scanf("%d",&number);
while(number!=0){
digit=number%10;
if(digit%2==0)
evencount++;
else
oddcount++;
number=number/10;}
printf("evendigits:%d\n",evencount);
printf("odddigits:%d\n",oddcount);
return 0;
}
