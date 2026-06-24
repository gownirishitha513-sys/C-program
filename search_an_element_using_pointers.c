#include <stdio.h>
int main() {
int n, key, found = 0;
printf("Enter size of array: ");
scanf("%d", &n);
int arr[n];
int *ptr = arr;
printf("Enter array elements:\n");
for(int i = 0; i < n; i++) {
scanf("%d", ptr + i);
}
printf("Enter element to search: ");
scanf("%d", &key);
for(int i = 0; i < n; i++) {
if(*(ptr + i) == key) {
printf("Element found at position %d\n", i + 1);
found = 1;
break;
}}
if(found == 0)
printf("Element not found\n");
return 0;
}