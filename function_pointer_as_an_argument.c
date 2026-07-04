#include <stdio.h>
int add(int a, int b) {
return a + b;
}
void calculate(int x, int y, int (*operation)(int, int)) {
printf("Result = %d\n", operation(x, y));
}
int main() {
calculate(20, 30, add);
return 0;
}