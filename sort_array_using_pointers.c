#include <stdio.h>
int main() {
int n, temp;
printf("Enter size of array: ");
scanf("%d", &n);
int arr[n];
int *ptr = arr;
printf("Enter array elements:\n");
for(int i = 0; i < n; i++) {
scanf("%d", ptr + i);
}
for(int i = 0; i < n - 1; i++) {
for(int j = i + 1; j < n; j++) {
if(*(ptr + i) > *(ptr + j)) {
temp = *(ptr + i);
*(ptr + i) = *(ptr + j);
*(ptr + j) = temp;
}}}
printf("Sorted Array:\n");
for(int i = 0; i < n; i++) {
printf("%d ", *(ptr + i));
}
return 0;
}