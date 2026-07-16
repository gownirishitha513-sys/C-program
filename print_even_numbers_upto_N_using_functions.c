#include <stdio.h>
void evenNumbers(int n);
int main()
{
int n;
printf("Enter the limit: ");
scanf("%d", &n);
evenNumbers(n);
return 0;
}
void evenNumbers(int n)
{
int i;
printf("Even numbers are:\n");
for (i = 2; i <= n; i = i + 2)
{
printf("%d ", i);
}
}