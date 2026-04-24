#include<stdio.h>
int main(){
int arr[100],i,n;
int sum=0,total,missing;
printf("enter size of array(n)");
scanf("%d",&n);
printf("enter %d elements(from 1 to %d without missing):n",n,n+1);
for(i=0;i<n;i++){
scanf("%d",&arr[i]);
sum += arr[i];
}
total=(n+1)*(n+2)/2;
missing=total-sum;
printf("missing number = %d",missing);
return 0;
}