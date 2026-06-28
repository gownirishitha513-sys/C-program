#include <stdio.h>
int main() {
int rows, cols, sum = 0;
printf("Enter rows and columns: ");
scanf("%d %d", &rows, &cols);
int matrix[rows][cols];
int *ptr = &matrix[0][0];
printf("Enter matrix elements:\n");
for(int i = 0; i < rows * cols; i++) {
scanf("%d", ptr + i);
}
for(int i = 0; i < rows * cols; i++) {
sum += *(ptr + i);
}
printf("Sum = %d\n", sum);
return 0;
}