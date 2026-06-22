#include <stdio.h>
int main() {
int n;
printf("Enter size of array: ");
scanf("%d", &n);
int arr[n];
int *ptr;
printf("Enter array elements:\n");
for (int i = 0; i < n; i++) {
scanf("%d", &arr[i]);
}
ptr = arr;
int max = *ptr;
for (int i = 1; i < n; i++) {
if (*(ptr + i) > max) {
max = *(ptr + i);
}
}
printf("Largest element = %d\n", max);
return 0;
}