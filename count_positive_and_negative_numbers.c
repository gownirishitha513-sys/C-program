#include<stdio.h>
int main(){
int arr[100],n,i;
int positive=0, negative=0;
printf("enter number of elements");
scanf("%d",&n);
printf("enter  %d elements:\n",n);
for(i = 0; i < n; i++){
scanf("%d", &arr[i]);
if(arr[i]>=0)
positive++;
else
negative++;}
printf("positive numbers=%d\n",positive);
printf("negative numbers=%d\n",negative);
return 0;
}
