#include <stdio.h>
int reverseNumber(int n);
int main()
{
int n, reverse;
printf("Enter a number: ");
scanf("%d", &n);
reverse = reverseNumber(n);
printf("Reversed number = %d\n", reverse);
return 0;
}
int reverseNumber(int n)
{
int reverse = 0, rem;
while (n != 0)
{
rem = n % 10;
reverse = reverse * 10 + rem;
n = n / 10;
}
return reverse;
}