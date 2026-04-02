#include<stdio.h>
#include<math.h>
int main(){
int start,end,num,temp,remainder,digits,result;
printf("enter range (start and end)");
scanf("%d%d",&start,&end);
for(num=start;num<=end;num++){
temp=num;
digits=0;
while(temp!=0){
temp=temp/10;
digits++;
}
temp=num;
result=0;
while(temp!=0){
remainder=temp%10;
result += pow(remainder,digits);
temp=temp/10;
}
if(result==num){
printf("% d", num);
}}
return 0;
}