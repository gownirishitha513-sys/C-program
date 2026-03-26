#include<stdio.h>
int main(){
int i,n,count=0;
printf("enter number:");
scanf("%d",&n);
if(n==0){
count=1;
}
if(n<0){
n=-n;
}
while(n !=0){
n=n/10;
count++;
}
printf("number of digits =%d",count);
return 0;
}