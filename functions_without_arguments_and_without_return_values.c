#include <stdio.h>
void add();   
int main()
{
add();    
return 0;
}
void add()    
{
int a, b, sum;
printf("Enter two numbers: ");
scanf("%d %d", &a, &b);
sum = a + b;
printf("Sum = %d\n", sum);
}