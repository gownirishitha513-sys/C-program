#include <stdio.h>
int add(int a, int b) {
return a + b;
}
int sub(int a, int b) {
return a - b;
}
int main() {
int (*operations[2])(int, int);
operations[0] = add;
operations[1] = sub;
printf("Addition = %d\n", operations[0](10, 5));
printf("Subtraction = %d\n", operations[1](10, 5));
return 0;
}