#include <stdio.h>
int main() {
int rows, cols;
printf("Enter rows and columns: ");
scanf("%d %d", &rows, &cols);
int matrix[rows][cols];
int *ptr = &matrix[0][0];
printf("Enter matrix elements:\n");
for(int i = 0; i < rows * cols; i++) {
scanf("%d", ptr + i);
}
printf("Matrix elements are:\n");
for(int i = 0; i < rows; i++) {
for(int j = 0; j < cols; j++) {
printf("%d ", *(ptr + i * cols + j));
}
printf("\n");
}
return 0;
}