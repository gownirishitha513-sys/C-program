#include <stdio.h>

int main()
{
    int a, b, c, d;

    printf("Enter 4 numbers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (a == b && a == c)
        printf("Odd one out = %d", d);
    else if (a == b && a == d)
        printf("Odd one out = %d", c);
    else if (a == c && a == d)
        printf("Odd one out = %d", b);
    else
        printf("Odd one out = %d", a);

    return 0;
}