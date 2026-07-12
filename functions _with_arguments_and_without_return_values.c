#include <stdio.h>
void add(int x, int y);   
int main()
{
int a, b;
printf("Enter two numbers: ");
scanf("%d %d", &a, &b);
add(a, b);    
return 0;
}
void add(int x, int y)   
{
int sum;
sum = x + y;
printf("Sum = %d\n", sum);
}