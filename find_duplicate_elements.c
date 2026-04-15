#include<stdio.h>
int main() {
int arr[100],freq[100],i,j,n,found;
printf("enter number of elements");
scanf("%d", &n);
printf("enter elements\n");
for(i=0;i<n;i++){
scanf("%d", &arr[i]);}
printf("duplicate elements are:");
for(i=0;i<n;i++){
found=0;
for(j=0;j<i;j++){
if(arr[i]== arr[j]){
found=1;
break;
}}
if(found)
continue;
for(j=i+1;j<n;j++){
if(arr[i]==arr[j]){
printf("%d ", arr[i]);
break;
}}}
return 0;
}