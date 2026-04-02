#include<stdio.h>
int main(){
int start,end,i,j,sum;
printf("enter start and end");
scanf("%d%d",&start,&end);
for(i=start;i<=end;i++){
sum=0;
for(j=1;j<=i/2;j++){
if(i%j==0){
sum+=j;
}}
if(sum ==i&& i!=0){
printf("% d", i);
}}
return 0;
}
