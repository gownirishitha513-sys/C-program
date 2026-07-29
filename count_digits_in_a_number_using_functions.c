#include <stdio.h>
int countDigits(int n);
int main()
{
int num, count;
printf("Enter a number: ");
scanf("%d", &num);
count = countDigits(num);
printf("Number of digits = %d\n", count);
return 0;
}
int countDigits(int n)
{
int count = 0;
while (n != 0)
{
count++;
n = n / 10;
}
return count;
}