#include <stdio.h>
int isStrong(int n);
int main()
{
int num;
printf("Enter a number: ");
scanf("%d", &num);
if (isStrong(num))
printf("%d is a Strong Number.\n", num);
else
printf("%d is not a Strong Number.\n", num);
return 0;
}
int isStrong(int n)
{
int temp = n, digit, sum = 0, fact;
while (temp != 0)
{
digit = temp % 10;
fact = 1;
for (int i = 1; i <= digit; i++)
{
fact = fact * i;
}
sum = sum + fact;
temp = temp / 10;
}
if (sum == n)
return 1;
else
return 0;
}