#include<stdio.h>
int main(){
int arr[100],n,i,maxRight;
printf("enter number of elements");
scanf("%d",&n);
printf("enter elements ");
for(i=0;i<n;i++){
scanf("%d",&arr[i]);}
printf("leaders in the array are:\n");
maxRight=arr[n-1];
printf("%d ", maxRight);
for(i=n-2;i>=0;i--){
if(arr[i]>maxRight){
maxRight=arr[i];
printf("%d ", arr[i]);
}
}
return 0;
}

    