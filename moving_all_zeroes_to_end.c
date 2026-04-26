#include<stdio.h>
int main(){
int i,j=0,n,arr[100],temp;
printf("enter number of elements");
scanf("%d",&n);
printf("enter elements");
for(i=0;i<n;i++){
scanf("%d",&arr[i]);}
for(i=0;i<n;i++){
if(arr[i]!=0){
temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;
j++;
}}
printf("array after moving zeroes to end:\n");
for(i=0;i<n;i++){
printf("%d ", arr[i]);
}
return 0;
}
