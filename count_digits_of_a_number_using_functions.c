#include <stdio.h>
int sumOfDigits(int n);
int main()
{
int num, sum;
printf("Enter a number: ");
scanf("%d", &num);
sum = sumOfDigits(num);
printf("Sum of digits = %d\n", sum);
return 0;
}
int sumOfDigits(int n)
{
int sum = 0;
while (n != 0)
{
sum = sum + (n % 10);
n = n / 10;
}
return sum;
}