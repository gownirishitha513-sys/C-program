#include <stdio.h>
int main() {
int arr[5] = {10, 20, 30, 40, 50};
int *ptr = arr;
printf("Initial Address: %p\n", ptr);
printf("Value: %d\n", *ptr);
ptr++;
printf("\nAfter ptr++\n");
printf("Address: %p\n", ptr);
printf("Value: %d\n", *ptr);
ptr++;
printf("\nAfter ptr++ again\n");
printf("Address: %p\n", ptr);
printf("Value: %d\n", *ptr);
return 0;
}