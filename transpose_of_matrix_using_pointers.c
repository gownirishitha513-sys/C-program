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
printf("Transpose Matrix:\n");
for(int i = 0; i < cols; i++) {
for(int j = 0; j < rows; j++) {
printf("%d ", *(ptr + j * cols + i));
}
printf("\n");
}
return 0;
}