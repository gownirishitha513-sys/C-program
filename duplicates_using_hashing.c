#include<stdio.h>
int main(){
int n,i,arr[100],hash[1000]={0};
printf("enter number of elements");
scanf("%d",&n);
printf("enter elements");
for(i=0;i<n;i++){
scanf("%d",&arr[i]);}
printf("duplicate elements are:\n");
for(i=0;i<n;i++){
hash[arr[i]]++;}
for(i=0;i<n;i++){
if(hash[arr[i]]>1){
printf("%d ", arr[i]);
hash[arr[i]]=0;}}
return 0;
}

    