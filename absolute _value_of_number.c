#include<stdio.h>
int main(){
int num;
printf("enter number");
scanf("%d",&num);
if(num<0){
num=-num;
}
printf("absolute value=%d",num);
return 0;
}