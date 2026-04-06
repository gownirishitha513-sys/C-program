#include<stdio.h>
int main(){
int arr[100],n,i;
float sum,average;
printf("enter number");
scanf("%d",&n);
printf("enter elements:\n",n);
for(i = 0; i < n; i++){
scanf("%d", &arr[i]);}
for(i = 0; i < n; i++){
sum=sum+arr[i];
}
average=sum/n;
printf("average =%2f",average);
return 0;
}