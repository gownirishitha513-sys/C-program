#include <stdio.h>
void primeRange(int start, int end);
int main()
{
int start, end;
printf("Enter starting number: ");
scanf("%d", &start);
printf("Enter ending number: ");
scanf("%d", &end);
primeRange(start, end);
return 0;
}
void primeRange(int start, int end)
{
int i, j, prime;
printf("Prime numbers are:\n");
for (i = start; i <= end; i++)
{
if (i < 2)
continue;
prime = 1;
for (j = 2; j <= i / 2; j++)
{
if (i % j == 0)
{
prime = 0;
break;
}
}
if (prime)
printf("%d ", i);
}
}