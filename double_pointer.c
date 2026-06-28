#include <stdio.h>
int main() {
int num = 10;
int *ptr = &num;
int **dptr = &ptr;
printf("Value of num = %d\n", num);
printf("Using ptr = %d\n", *ptr);
printf("Using dptr = %d\n", **dptr);
return 0;
}