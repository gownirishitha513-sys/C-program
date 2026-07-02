#include <stdio.h>
#include <stdlib.h>
int main() {
int n, newSize;
printf("Enter initial size: ");
scanf("%d", &n);
int *ptr = (int *)malloc(n * sizeof(int));
if (ptr == NULL) {
printf("Memory allocation failed.\n");
return 1;
}
printf("Enter %d elements:\n", n);
for (int i = 0; i < n; i++) {
scanf("%d", ptr + i);
}
printf("Enter new size: ");
scanf("%d", &newSize);
ptr = (int *)realloc(ptr, newSize * sizeof(int));
if (ptr == NULL) {
printf("Memory reallocation failed.\n");
return 1;
}
if (newSize > n) {
printf("Enter %d more elements:\n", newSize - n);
for (int i = n; i < newSize; i++) {
scanf("%d", ptr + i);
}
}
printf("Array elements are:\n");
for (int i = 0; i < newSize; i++) {
printf("%d ", *(ptr + i));
}
free(ptr);
return 0;
}