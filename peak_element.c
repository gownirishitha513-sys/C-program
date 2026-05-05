#include<stdio.h>
int main(){
int n,i,arr[100];
printf("enter number of elements");
scanf("%d",&n);
printf("enter elements");
for(i=0;i<n;i++){
scanf("%d",&arr[i]);}
printf("peak element are:\n");
for(i=0;i<n;i++){
if((i==0||arr[i]>=arr[i-1])&&(i==n-1||arr[i]>=arr[i+1])){
printf("%d ", arr[i]);
}}
return 0;
}


    