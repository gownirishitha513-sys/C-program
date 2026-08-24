#include <stdio.h>
#include <string.h>

int main() {
    char hex[20];
    int decimal = 0, i, value;

    printf("Enter a hexadecimal number: ");
    scanf("%s", hex);

    for (i = 0; hex[i] != '\0'; i++) {
        if (hex[i] >= '0' && hex[i] <= '9')
            value = hex[i] - '0';
        else if (hex[i] >= 'A' && hex[i] <= 'F')
            value = hex[i] - 'A' + 10;
        else if (hex[i] >= 'a' && hex[i] <= 'f')
            value = hex[i] - 'a' + 10;
        else {
            printf("Invalid hexadecimal number");
            return 0;
        }

        decimal = decimal * 16 + value;
    }

    printf("Decimal = %d", decimal);

    return 0;
}