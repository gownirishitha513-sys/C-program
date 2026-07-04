#include <stdio.h>
int *getMax(int *a, int *b) {
if (*a > *b)
return a;
else
return b;
}
int main() {
int x, y;
int *result;
printf("Enter two numbers: ");
scanf("%d %d", &x, &y);
result = getMax(&x, &y);
printf("Largest number = %d\n", *result);
return 0;
}