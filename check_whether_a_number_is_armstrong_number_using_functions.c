#include <stdio.h>
int armstrong(int n);
int main()
{
int n;
printf("Enter a number: ");
scanf("%d", &n);
if (armstrong(n))
printf("%d is an Armstrong number.\n", n);
else
printf("%d is not an Armstrong number.\n", n);
return 0;
}
int armstrong(int n)
{
int temp, rem, sum = 0;
temp = n;
while (temp != 0)
{
rem = temp % 10;
sum = sum + (rem * rem * rem);
temp = temp / 10;
}
if (sum == n)
return 1;
else
return 0;
}