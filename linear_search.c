#include<stdio.h>
int main(){
int arr[100],n,i,key;
printf("enter number of elements");
scanf("%d",&n);
printf("enter  %d elements:\n",n);
for(i = 0; i < n; i++){
scanf("%d", &arr[i]);}
printf("enter element to search");
scanf("%d",&key);
for(i=0;i<n;i++){
if(arr[i]==key){
printf("element found at position  %d\n",i+1);
return 0;}}
printf("element is not found \n");
return 0;
}