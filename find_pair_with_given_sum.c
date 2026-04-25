#include<stdio.h>
int main(){
int i,j,arr[100],n,sum;
int found=0;
printf("enter size of elements");
scanf("%d",&n);
printf("enter elements");
for(i=0;i<n;i++){
scanf("%d",&arr[i]);}
printf("enter targeted sum");
scanf("%d",&sum);
printf("pairs with given sum");
for(i=0;i<n;i++){
for(j=i+1;j<n;j++){
if(arr[i]+arr[j]==sum){
printf("(%d,%d)\n",arr[i],arr[j]);
found=1;
}}}
if(found==0){
printf("no pairs is found");
}
return 0;
}