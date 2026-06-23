#include <stdio.h>
int main() {
int n;
printf("Enter size of array: ");
scanf("%d", &n);
int arr[n];
int *ptr = arr;
printf("Enter array elements:\n");
for(int i = 0; i < n; i++) {
scanf("%d", ptr + i);
}
int min = *ptr;
for(int i = 1; i < n; i++) {
if(*(ptr + i) < min) {
min = *(ptr + i);
}
}
printf("Smallest element = %d\n", min);
return 0;
}