#include <stdio.h>
int sumEven(int n);
int main()
{
int n, sum;
printf("Enter the limit: ");
scanf("%d", &n);
sum = sumEven(n);
printf("Sum of even numbers = %d\n", sum);
return 0;
}
int sumEven(int n)
{
int i, sum = 0;
for (i = 2; i <= n; i = i + 2)
{
sum = sum + i;
}
return sum;
}