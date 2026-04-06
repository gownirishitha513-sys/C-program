#include<stdio.h>
int main(){
int arr[100],n,i,min;
printf("enter number");
scanf("%d",&n);
printf("enter elements:\n",n);
for(i = 0; i < n; i++){
scanf("%d", &arr[i]);}
min=arr[0];
for(i=0;i<n;i++){
if(arr[i]<min){
min=arr[i];
}
}
printf("minimum element=%d",min);
return 0;
}