#include<stdio.h>
int main(){
int n,i,j,arr[100],sum;
printf("enter number of elements");
scanf("%d",&n);
printf("enter elements");
for(i=0;i<n;i++){
scanf("%d",&arr[i]);}
printf("enter required sum");
scanf("%d",&sum);
printf("subarrays with given sum:\n");
for(i=0;i<n;i++){
int current_sum=0;
for(j=i;j<n;j++){
current_sum+=arr[j];
if(current_sum==sum){
printf("from index  %d to%d\n",i,j);
}}}
return 0;
}




    