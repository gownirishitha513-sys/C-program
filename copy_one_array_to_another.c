#include<stdio.h>
int main(){
int arr1[100],arr2[100];
int n,i;
printf("enter number of elements");
scanf("%d",&n);
printf("enter  %d elements:\n",n);
for(i = 0; i < n; i++){
scanf("%d", &arr1[i]);
}
for(i=0; i<n; i++){
arr2[i] = arr1[i];}
printf(" copied array elements:\n");
for(i=0; i<n; i++){
printf("%d ", arr2[i]);}
return 0;
}