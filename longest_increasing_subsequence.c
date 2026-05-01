#include<stdio.h>
int main(){
int arr[100],lis[100],n,i,j;
printf("enter  number of elements");
scanf("%d",&n);
printf("enter elements");
for(i=0;i<n;i++){
scanf("%d",&arr[i]);
lis[i]=1;
}
for(i=0;i<n;i++){
for(j=0;j<i;j++){
if(arr[i]>arr[j]&& lis[i]<lis[j]+1){
lis[i]=lis[j]+1;
}
}
}
int max=lis[0];
for(i=1;i<n;i++){
if(lis[i]>max)
max=lis[i];
}
printf("length of LIS=%d\n",max);
return 0;
}
