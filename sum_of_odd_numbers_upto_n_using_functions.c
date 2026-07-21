#include <stdio.h>
int sumOdd(int n);
int main()
{
int n, sum;
printf("Enter the limit: ");
scanf("%d", &n);
sum = sumOdd(n);
printf("Sum of odd numbers = %d\n", sum);
return 0;
}
int sumOdd(int n)
{
int i, sum = 0;
for (i = 1; i <= n; i = i + 2)
{
sum = sum + i;
}
return sum;
}