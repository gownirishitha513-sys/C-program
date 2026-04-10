#include<stdio.h>
int main() {
int arr[100],n,i;
printf("enter number of elements");
scanf("%d",&n);
printf("enter  %d elements:\n",n);
for(i = 0; i < n; i++) {
scanf("%d", &arr[i]);
}

printf("elements at even positions:\n");
for(i = 0; i < n; i+=2) {
printf("%d ", arr[i]);
}
return 0;
}
    