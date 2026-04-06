#include<stdio.h>
int main(){
int arr[100],n,i,max;
printf("enter number");
scanf("%d",&n);
printf("enter elements:\n",n);
for(i = 0; i < n; i++){
scanf("%d", &arr[i]);}
max=arr[0];
for(i=0;i<n;i++){
if(arr[i]>max){
max=arr[i];
}
}
printf("maximum element=%d",max);
return 0;
}