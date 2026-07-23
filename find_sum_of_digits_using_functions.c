#include <stdio.h>

int sumOfDigits(int n);
int main()
{
int n, sum;
printf("Enter a number: ");
scanf("%d", &n);
sum = sumOfDigits(n);
printf("Sum of digits = %d\n", sum);
return 0;
}
int sumOfDigits(int n)
{
int rem, sum = 0;
while (n != 0)
{
rem = n % 10;
sum = sum + rem;
n = n / 10;
}
return sum;
}