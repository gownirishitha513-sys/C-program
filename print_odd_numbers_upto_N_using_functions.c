#include <stdio.h>
void oddNumbers(int n);
int main()
{
int n;
printf("Enter the limit: ");
scanf("%d", &n);
oddNumbers(n);
return 0;
}
void oddNumbers(int n)
{
int i;
printf("Odd numbers are:\n");
for (i = 1; i <= n; i = i + 2)
{
printf("%d ", i);
}
}