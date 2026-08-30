#include <stdio.h>

int main()
{
    char hex[20];
    int decimal = 0, octal = 0, digit, i = 0;

    printf("Enter hexadecimal number: ");
    scanf("%s", hex);

    while (hex[i] != '\0')
    {
        if (hex[i] >= '0' && hex[i] <= '9')
            digit = hex[i] - '0';
        else if (hex[i] >= 'A' && hex[i] <= 'F')
            digit = hex[i] - 'A' + 10;
        else if (hex[i] >= 'a' && hex[i] <= 'f')
            digit = hex[i] - 'a' + 10;
        else
        {
            printf("Invalid hexadecimal number");
            return 0;
        }

        decimal = decimal * 16 + digit;
        i++;
    }

    i = 1;
    while (decimal != 0)
    {
        octal += (decimal % 8) * i;
        decimal /= 8;
        i *= 10;
    }

    printf("Octal equivalent = %d\n", octal);

    return 0;
}