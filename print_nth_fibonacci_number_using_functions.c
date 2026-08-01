#include <stdio.h>
int nthFibonacci(int n);
int main()
{
int n, result;
printf("Enter the term number: ");
scanf("%d", &n);
result = nthFibonacci(n);
printf("%dth Fibonacci number = %d\n", n, result);
return 0;
}
int nthFibonacci(int n)
{
if (n == 1)
return 0;
if (n == 2)
return 1;
int a = 0, b = 1, c;
for (int i = 3; i <= n; i++)
{
c = a + b;
a = b;
b = c;
}
return b;
}