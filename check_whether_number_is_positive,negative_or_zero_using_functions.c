#include <stdio.h>
void checkNumber(int n);
int main()
{
int n;
printf("Enter a number: ");
scanf("%d", &n);
checkNumber(n);
return 0;
}
void checkNumber(int n)
{
if (n > 0)
printf("%d is a Positive number.\n", n);
else if (n < 0)
printf("%d is a Negative number.\n", n);
else
printf("The number is Zero.\n");
}