#include<stdio.h>
int main() {
int arr[100],n,i,temp;
printf("enter number of elements");
scanf("%d",&n);
printf("enter  %d elements:\n",n);
for(i = 0; i < n; i++) {
scanf("%d", &arr[i]);
}
temp=arr[0];
arr[0]=arr[n-1];
arr[n-1]=temp;
printf("array after swapping:\n");
for(i = 0; i < n; i++) {
printf("%d ", arr[i]);
}
return 0;
}
