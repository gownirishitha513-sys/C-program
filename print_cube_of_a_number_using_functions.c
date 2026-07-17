#include <stdio.h>
int cube(int n);
int main()
{
int num, result;
printf("Enter a number: ");
scanf("%d", &num);
result = cube(num);
printf("Cube = %d\n", result);
return 0;
}
int cube(int n)
{
return n * n * n;
}