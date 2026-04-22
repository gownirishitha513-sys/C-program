#include<stdio.h>
int main(){
int arr[100],n,i,key,count=0;
printf("enter number of elements");
scanf("%d",&n);
printf("enter elements:\n");
for(i=0;i<n;i++){
scanf("%d",&arr[i]);}
printf("enter number to find occurence");
scanf("%d",&key);
for(i=0;i<n;i++){
if(arr[i] == key){
count++;}
}
printf("occurence of %d=%d",key,count);
return 0;
}