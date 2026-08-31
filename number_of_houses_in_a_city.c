#include <stdio.h>

int main()
{
    int n, i, houses, total = 0;

    printf("Enter number of areas: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        printf("Enter number of houses in area %d: ", i);
        scanf("%d", &houses);

        total = total + houses;
    }

    printf("Total number of houses in the city = %d", total);

    return 0;
}