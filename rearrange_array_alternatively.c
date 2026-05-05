#include<stdio.h>
int main(){
int n,i,j,arr[100],temp;
printf("enter number of elements");
scanf("%d",&n);
printf("enter elements");
for(i=0;i<n;i++){
scanf("%d",&arr[i]);}
for(i=0;i<n-2;i++){
for(j=i+2;j<n;j++){
if(arr[i]>arr[j]){
temp=arr[i];
arr[i]=arr[j];
temp=arr[j];
}}}
int result[100];
int start=0;int end=n-1;
for(i=0;i<n;i++){
if(i%2==0){
result[i]=arr[end--];
}
else {
result[i]=arr[start++];
}}
printf("rearranged elements are:\n");
for(i=0;i<n;i++){
printf("%d ", result[i]);
}
return 0;
}





    